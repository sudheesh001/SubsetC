%{
	 #include <string.h>
	 #include <stdio.h>

	 int lines=1;
	 int flag=0,size_not_given=0,mark=0;
	 char initial_list[100];

%}
letter [A-Za-z_]
digit [0-9]
esc_seq \\([nrbtafv\'"0]|nnn|xhh|uhhhh)
%option noyywrap
%%
\n {lines++;}
"auto" {printf("%d: AUTO\n",lines);return AUTO;}
"break" {printf("%d: BREAK\n",lines);return BREAK;}
"case" {printf("%d: CASE\n",lines);return CASE;}
"char" {printf("%d: CHAR\n",lines);return CHAR;}
"const" {printf("%d: CONST\n",lines);return CONST;}
"continue" {printf("%d: CONTINUE\n",lines);return CONTINUE;}
"default" {printf("%d: DEFAULT\n",lines);return DEFAULT;}
"do" {printf("%d: DO\n",lines);return DO;}
"double" {printf("%d: DOUBLE\n",lines);return DOUBLE;}
"else" {printf("%d: ELSE\n",lines);return ELSE;}
"enum" {printf("%d: ENUM\n",lines);return ENUM;}
"extern" {printf("%d: EXTERN\n",lines);return EXTERN;}
"float" {printf("%d: FLOAT\n",lines);return FLOAT;}
"for" {printf("%d: FOR\n",lines);return FOR;}
"goto" {printf("%d: GOTO\n",lines);return GOTO;}
"if" {printf("%d: IF\n",lines);return IF;}
"int" {printf("%d: INT\n",lines);return INT;}
"long" {printf("%d: LONG\n",lines);return LONG;}
"register" {printf("%d: REGISTER\n",lines);return REGISTER;}
"return" {printf("%d: RETURN\n",lines);return RETURN;}
"short" {printf("%d: SHORT\n",lines);return SHORT;}
"signed" {printf("%d: SIGNED\n",lines);return SIGNED;}
"sizeof" {printf("%d: SIZEOF\n",lines);return SIZEOF;}
"static" {printf("%d: STATIC\n",lines);return STATIC;}
"struct" {printf("%d: STRUCT\n",lines);return STRUCT;}
"switch" {printf("%d: SWITCH\n",lines);return SWITCH;}
"typedef" {printf("%d: TYPEDEF\n",lines);return TYPEDEF;}
"union" {printf("%d: UNION\n",lines);return UNION;}
"unsigned" {printf("%d: UNSIGNED\n",lines);return UNSIGNED;}
"void" {printf("%d: VOID\n",lines);return VOID;}
"volatile" {printf("%d: VOLATILE\n",lines);return VOLATILE;}
"while" {printf("%d: WHILE\n",lines);return WHILE;}

({letter}|_)({letter}|_|{digit})* {printf("%d: IDENTIFIER %s\n",lines,yytext);strcpy(yylval.varname,yytext);return IDENTIFIER;}

{digit}+ { printf("%d: NUMBER: %s\n",lines,yytext);strcpy(yylval.varname,yytext);return NUMBER;}
{digit}+(\.{digit}*)? { printf("%d: REAL_NUMBER: %s\n",lines,yytext);strcpy(yylval.varname,yytext);return REAL_NUMBER;}
{digit}+(\.{digit}*)?([Ee][+-]?{digit}+(\.{digit}*)?)? { printf("%d: EXP_NUMBER: %s\n",lines,yytext);strcpy(yylval.varname,yytext);return EXP_NUMBER;}

\'{esc_seq}\' { printf("%d: CHAR_CONSTANT: %s\n",lines,yytext);strcpy(yylval.varname,yytext);return CHAR_CONSTANT; }
\'.\' { printf("%d: CHAR_CONSTANT: %s\n",lines,yytext);strcpy(yylval.varname,yytext);return CHAR_CONSTANT; }
\"([^"]|(\\\"))*\" { printf("%d: STRING_CONSTANT: %s\n",lines,yytext);strcpy(yylval.varname,yytext);return STRING_CONSTANT; }



\. {printf("%d: ",lines);printf("DOT\n");return DOT;}
\: {printf("%d: ",lines);printf("COLON\n");return COLON;}
\= {printf("%d: ",lines);printf("EQUALS\n");return EQUALS;}
\; {printf("%d: ",lines);printf("SEMI_COLON\n");return SEMI_COLON;}
\# {printf("%d: ",lines);printf("HASH\n");return HASH;}
\" {printf("%d: ",lines);printf("DOUBLE_QUOTES\n");return DOUBLE_QUOTES;}
\' {printf("%d: ",lines);printf("SINGLE_QUOTES\n");return SINGLE_QUOTES;}
\( {printf("%d: ",lines);printf("OPEN_PARANTHESES\n");return OPEN_PARANTHESES;}
\) {printf("%d: ",lines);printf("CLOSE_PARANTHESES\n");return CLOSE_PARANTHESES;}

\{ {printf("%d: ",lines);printf("OPEN_BRACES\n");flag=1;size_not_given=1;strcpy(initial_list," ");return OPEN_BRACES;}
\} {printf("%d: ",lines);printf("CLOSE_BRACES\n");flag=0;strcat(initial_list," ");return CLOSE_BRACES;}
\, {printf("%d: ",lines);printf("COMMA\n");if(flag==1)strcat(initial_list,", ");size_not_given++;return COMMA;}
\[ {printf("%d: ",lines);printf("OPEN_SQ_BRACKET\n");mark=1;return OPEN_SQ_BRACKET;}
\] {printf("%d: ",lines);printf("CLOSE_SQ_BRACKET\n");mark=0;return CLOSE_SQ_BRACKET;}
\.\.\. {printf("%d: ",lines);printf("THREE_DOT\n");return THREE_DOT;}

\+\+ {printf("%d: ",lines);printf("INCREMENT\n");return INCREMENT;}
\-\- {printf("%d: ",lines);printf("DECREMENT\n");return DECREMENT;}
\+ {printf("%d: ",lines);printf("ADD\n");return ADD;}
\- {printf("%d: ",lines);printf("SUBTRACT\n");return SUBTRACT;}
\* {printf("%d: ",lines);printf("MULTIPLY\n");return MULTIPLY;}
\/ {printf("%d: ",lines);printf("DIVIDE\n");return DIVIDE;}
\% {printf("%d: ",lines);printf("MOD\n");return MOD;}

\! {printf("%d: ",lines);printf("NOT\n");return NOT;}
\&\& {printf("%d: ",lines);printf("AND\n");return AND;}
\|\| {printf("%d: ",lines);printf("OR\n");return OR;}
\< {printf("%d: ",lines);printf("LESS_THAN\n");return LESS_THAN;}
\<\= {printf("%d: ",lines);printf("LESS_THAN_EQUAL\n");}
\> {printf("%d: ",lines);printf("GREATER_THAN\n");return GREATER_THAN;}
\>\= {printf("%d: ",lines);printf("GREATER_THAN_EQUAL\n");return GREATER_THAN_EQUAL;}
\=\= {printf("%d: ",lines);printf("IS_EQUAL_TO\n");return IS_EQUAL_TO;}
\!\= {printf("%d: ",lines);printf("NOT_EQUAL_TO\n");return NOT_EQUAL_TO;}
\& {printf("%d: ",lines);printf("BITWISE_AND\n");return BITWISE_AND;}
\| {printf("%d: ",lines);printf("BITWISE_OR\n");return BITWISE_OR;}
\~ {printf("%d: ",lines);printf("NEGATION\n");return NEGATION;}
\^ {printf("%d: ",lines);printf("XOR\n");return XOR;}
\>\> {printf("%d: ",lines);printf("R_SHIFT\n");return R_SHIFT;}
\<\< {printf("%d: ",lines);printf("L_SHIFT\n");return L_SHIFT;}


\+\= {printf("%d: ",lines);printf("SHORTHAND_ADD\n");return SHORTHAND_ADD;}
\-\= {printf("%d: ",lines);printf("SHORTHAND_SUB\n");return SHORTHAND_SUB;}
\*\= {printf("%d: ",lines);printf("SHORTHAND_MUL\n");return SHORTHAND_MUL;}
\/\= {printf("%d: ",lines);printf("SHORTHAND_DIV\n");return SHORTHAND_DIV;}
\%\= {printf("%d: ",lines);printf("SHORTHAND_MOD\n");return SHORTHAND_MOD;}
\&\= {printf("%d: ",lines);printf("SHORTHAND_AND\n");return SHORTHAND_AND;}
\^\= {printf("%d: ",lines);printf("SHORTHAND_XOR\n");return SHORTHAND_XOR;}
\|\= {printf("%d: ",lines);printf("SHORTHAND_OR\n");return SHORTHAND_OR;}
\<\<\= {printf("%d: ",lines);printf("SHORTHAND_LSHIFT\n");return SHORTHAND_LSHIFT;}
\>\>\= {printf("%d: ",lines);printf("SHORTHAND_RSHIFT\n");return SHORTHAND_RSHIFT;}
\?\: {printf("%d: ",lines);printf("TERNARY\n");return TERNARY;}
\-\> {printf("%d: ",lines);printf("LINK\n");return LINK;}


((" ")|\t) {}
. {printf("%d: ",lines);printf("ERROR\n");}

%%

