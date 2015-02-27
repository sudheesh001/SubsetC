%{
    #include <string.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	#define int_a 0x1
	#define char_a 0x2
	#define float_a 0x4
	#define double_a 0x8
	#define long_a 0x10
	#define short_a 0x20
	#define unsigned_a 0x100
	#define signed_a 0x200

	extern int lines;
	extern char *yytext;
	extern int flag;
	extern char initial_list[100];
	extern int mark;
	extern int size_not_given;

    FILE *fp;
    FILE *fptr;


	struct node
	{
		char name[50],datatype[50],initial[50],size[50];
		int line,no_dimen;

	}table[205];

    struct node1
    {
        char op1[50],op2[50],operator[50],result[50];
    }quad[205];


	int id=0,i,j,num,curr_cnt,comma_cnt,l,right,top,top1,top2,top3,idx=0,temp_cnt=0;
	char str[50],temp[50],dimen[50],tname[50],s1[50],s2[50],s3[50],s4[50],num_string[50],label[100][50],label1[100][50],label2[100][50],label3[100][50],temp_var[200][200];
	int auto_a,static_a,extern_a,typedef_a,register_a,sum,i,num,res,c,end=0,may_be_size=-1,cnt[1024];
	int arr[]={0x1,0x2,0x4,0x8,0x20,0x100,0x200};
	int valid[]={0x1,0x2,0x4,0x8,0x10,0x11,0x18,0x20,0x21,0x100,0x101,0x102,0x110,0x111,0x120,0x121,0x200,0x201,0x202,0x210,0x211,0x220,0x221};

	void check(char s_name[]);
	void insert(char s_name[],char s_type[],int l);
	void lookup();
	void generate();
	void int_to_str(int);
	void generate_code();
    void check_arr(char ch_ar1[],char ch_ar2[]);
%}

%union{
	char varname[50];
	int val;
}
%type <varname> IDENTIFIER REAL_NUMBER EXP_NUMBER CHAR_CONSTANT STRING_CONSTANT NUMBER SUBTRACT NEGATION NOT ADD MULTIPLY BITWISE_AND
%type <varname> multiplicative_expression additive_expression shift_expression relational_expression equality_expression AND_expression
%type <varname> exclusive_OR_expression inclusive_OR_expression assignment_operator unary_operator expression iteration_statement leftfactor
%type <varname> logical_AND_expression logical_OR_expression conditional_expression constant_expression constant direct_declarator
%type <varname> primary_expression postfix_expression unary_expression cast_expression assignment_expression

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM
%token EXTERN FLOAT FOR GOTO IF INT LONG REGISTER RETURN SHORT SIGNED SIZEOF STATIC
%token STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE

%token IDENTIFIER NUMBER REAL_NUMBER EXP_NUMBER CHAR_CONSTANT STRING_CONSTANT

%token DOT COLON EQUALS SEMI_COLON HASH DOUBLE_QUOTES SINGLE_QUOTES OPEN_PARANTHESES CLOSE_PARANTHESES
%token OPEN_BRACES CLOSE_BRACES COMMA OPEN_SQ_BRACKET CLOSE_SQ_BRACKET THREE_DOT

%token INCREMENT DECREMENT ADD SUBTRACT MULTIPLY DIVIDE MOD
%token NOT AND OR LESS_THAN LESS_THAN_EQUAL GREATER_THAN GREATER_THAN_EQUAL
%token IS_EQUAL_TO NOT_EQUAL_TO BITWISE_AND BITWISE_OR NEGATION XOR R_SHIFT L_SHIFT

%token SHORTHAND_ADD SHORTHAND_SUB SHORTHAND_MUL SHORTHAND_DIV SHORTHAND_MOD SHORTHAND_AND
%token SHORTHAND_XOR SHORTHAND_OR SHORTHAND_LSHIFT SHORTHAND_RSHIFT TERNARY LINK


%%

translation_unit
				:external_declaration{printf("\tReduced : translation_unit -> external_declaration\n");}
				|translation_unit external_declaration {printf("\tReduced : translation_unit -> translation_unit external_declaration\n");}
				;

external_declaration
					:function_definition
					{printf("\tReduced : external_declaration -> function_definition\n");}
					|declaration
					{printf("\tReduced : external_declaration -> declaration\n");}
					;

function_definition
				   :declaration_specifiers declarator declaration_list compound_statement
				   {printf("\tReduced : function_definition -> declaration_specifiers declarator declaration_list compound_statement\n");}
				   |declarator declaration_list compound_statement
				   {printf("\tReduced : function_definition -> declarator declaration_list compound_statement\n");}
				   |declaration_specifiers declarator compound_statement
				   {printf("\tReduced : function_definition -> declaration_specifiers declarator compound_statement\n");}
				   |declarator compound_statement
				   {printf("\tReduced : function_definition -> declarator compound_statement\n");}
				   ;

declaration
		   :declaration_specifiers init_declarator_list SEMI_COLON
		   {
			printf("\tReduced : declaration -> declaration_specifiers init_declarator_list SEMI_COLON\n");


			if(cnt[signed_a]==1)
			strcat(str,"signed ");
			if(cnt[unsigned_a]==1)
			strcat(str,"unsigned ");
			if(cnt[long_a]==1)
			strcat(str,"long ");
			if(cnt[long_a]==2)
			strcat(str,"long long ");
			if(cnt[short_a]==1)
			strcat(str,"short ");
			if(cnt[char_a]==1)
			strcat(str,"char ");
			if(cnt[int_a]==1)
			strcat(str,"int ");
		        if(cnt[float_a]==1)
			strcat(str,"float ");
			if(cnt[double_a]==1)
			strcat(str,"double ");




			for(i=0;i<id;i++)
			{
                l=strlen(table[i].size);
                table[i].no_dimen=0;
                for(j=0;j<l;j++)
                {
                    if(table[i].size[j]==',')
                        table[i].no_dimen++;
                }
                if(!strcmp(table[i].datatype,"NULL") && table[i].line==lines)
				strcpy(table[i].datatype,str);
			}

			for(i=0;i<7;i++)
			cnt[arr[i]]=0;
			cnt[long_a]=0;

			memset(str,0,strlen(str));
			auto_a=0;extern_a=0;typedef_a=0;static_a=0;register_a=0;sum=0;
		    }
		   |declaration_specifiers SEMI_COLON {printf("\tReduced : declaration -> declaration_specifiers SEMI_COLON\n");for(i=0;i<=8;i++)cnt[arr[i]]=0;cnt[long_a]=0;auto_a=0;extern_a=0;typedef_a=0;static_a=0;register_a=0;sum=0;id=0;}
		   ;

declaration_list
				:declaration {printf("\tReduced : declaration_list -> declaration\n");}
				|declaration_list declaration {printf("\tReduced : declaration_list -> declaration_list declaration\n");}
				;

declaration_specifiers
					  :storage_class_specifier declaration_specifiers
					  {
						printf("\tReduced : declaration_specifiers -> storage_class_specifier declaration_specifiers\n");
						sum=auto_a+register_a+static_a+typedef_a+extern_a;
						if(auto_a>1 || register_a>1 || static_a>1 || extern_a>1 || typedef_a>1 || sum>1)
						yyerror();
					  }
					  |storage_class_specifier {printf("\tReduced : declaration_specifiers -> storage_class_specifier\n");}
					  |type_specifier declaration_specifiers
					  {
						printf("\tReduced : declaration_specifiers -> type_specifier declaration_specifiers\n");

						/*NONE OF THE DATA TYPE SHOULD BE PRESENT TWICE Ex:INT INT IS WRONG */

						for(i=0;i<7;i++)
						{
							if(cnt[arr[i]]>1)
							{
							printf("\n*****ERROR: Wrong Data Type *****\n");
							exit(0);
							}
						}
						if(cnt[long_a]>2)
						{
						printf("\n*****ERROR: long cannot occur more than twice in Data Type *****\n ");
						exit(0);
						}

						res=0;
						for(i=0;i<7;i++)
						{
							if(cnt[arr[i]]==1)
							res=res|arr[i];
						}

						if(cnt[long_a]==1 || cnt[long_a]==2)
						res=res|long_a;

						c=0;

						for(i=0;i<=22;i++)
						{
							if(res==valid[i])
							{c=1;break;}
						}



						if(c==0)
						{
						printf("\n*****ERROR: Wrong Data Type given in Line No. %d*****\n",lines);
						exit(0);
						}
					  }
					  |type_specifier {printf("\tReduced : declaration_specifiers -> type_specifier\n");}
					  |type_qualifier declaration_specifiers
                       {printf("\tReduced : declaration_specifiers -> type_qualifier declaration_specifiers\n");}
					  |type_qualifier {printf("\tReduced : declaration_specifiers -> type_qualifier\n");}
					  ;

storage_class_specifier
					   :AUTO {printf("\tReduced : storage_class_specifier -> AUTO\n");auto_a++;}
					   |REGISTER {printf("\tReduced : storage_class_specifier -> REGISTER\n");register_a++;}
					   |STATIC {printf("\tReduced : storage_class_specifier -> STATIC\n");static_a++;}
					   |EXTERN {printf("\tReduced : storage_class_specifier -> EXTERN\n");extern_a++;}
					   |TYPEDEF {printf("\tReduced : storage_class_specifier -> TYPEDEF\n");typedef_a++;}
					   ;

type_specifier
			  :VOID {printf("\tReduced : type_specifier -> VOID\n");}
			  |CHAR {printf("\tReduced : type_specifier -> CHAR\n");cnt[char_a]++;}
			  |SHORT {printf("\tReduced : type_specifier -> SHORT\n");cnt[short_a]++;}
			  |INT {printf("\tReduced : type_specifier -> INT\n");cnt[int_a]++;}
			  |LONG {printf("\tReduced : type_specifier -> LONG\n");cnt[long_a]++;}
			  |FLOAT {printf("\tReduced : type_specifier -> FLOAT\n");cnt[float_a]++;}
			  |DOUBLE {printf("\tReduced : type_specifier -> DOUBLE\n");cnt[double_a]++;}
			  |SIGNED {printf("\tReduced : type_specifier -> SIGNED\n");cnt[signed_a]++;}
			  |UNSIGNED {printf("\tReduced : type_specifier -> UNSIGNED\n");cnt[unsigned_a]++;}
			  |struct_or_union_specifier {printf("\tReduced : type_specifier -> struct_or_union_specifier\n");}
			  |enum_specifier {printf("\tReduced : type_specifier -> enum_specifier\n");}
			  ;

type_qualifier
			  :CONST {printf("\tReduced : type_qualifier -> CONST\n");}
			  |VOLATILE {printf("\tReduced : type_qualifier -> VOLATILE\n");}
			  ;

struct_or_union_specifier
						 :struct_or_union IDENTIFIER OPEN_BRACES struct_declaration_list CLOSE_BRACES
						 {printf("\tReduced : struct_or_union_specifier -> struct_or_union IDENTIFIER OPEN_BRACES struct_declaration_list CLOSE_BRACES\n");}
						 |struct_or_union OPEN_BRACES struct_declaration_list CLOSE_BRACES
						 {printf("\tReduced : struct_or_union_specifier -> struct_or_union OPEN_BRACES struct_declaration_list CLOSE_BRACES\n");}
						 |struct_or_union IDENTIFIER {printf("\tReduced : struct_or_union_specifier -> struct_or_union IDENTIFIER\n");}
						 ;

struct_or_union
			   :STRUCT {printf("\tReduced : struct_or_union -> STRUCT\n");}
			   |UNION {printf("\tReduced : struct_or_union -> UNION\n");}
			   ;

struct_declaration_list
					   :struct_declaration {printf("\tReduced : struct_declaration_list -> struct_declaration\n");}
					   |struct_declaration_list struct_declaration
					   {printf("\tReduced : struct_declaration_list -> struct_declaration_list struct_declaration\n");}
					   ;

init_declarator_list
					:init_declarator {printf("\tReduced : init_declarator_list -> init_declarator\n");}
					|init_declarator_list COMMA init_declarator
					{printf("\tReduced : init_declarator_list -> init_declarator_list COMMA init_declarator\n");}
					;

init_declarator
			   :declarator {printf("\tReduced : init_declarator -> declarator\n");}
			   |declarator EQUALS initializer
			   {
				printf("\tReduced : init_declarator -> declarator EQUALS initializer\n");
				if(!strcmp(table[id-1].initial,"0"))
				strcpy(table[id-1].initial,temp);

			   }
			   ;

struct_declaration
				  :specifier_qualifier_list struct_declarator_list SEMI_COLON
				  {printf("\tReduced : struct_declaration -> specifier_qualifier_list struct_declarator_list SEMI_COLON\n");}
				  ;

specifier_qualifier_list
						:type_specifier specifier_qualifier_list
						{printf("\tReduced : specifier_qualifier_list -> type_specifier specifier_qualifier_list\n");}
						|type_specifier {printf("\tReduced : specifier_qualifier_list -> type_specifier\n");}
						|type_qualifier specifier_qualifier_list
						{printf("\tReduced : specifier_qualifier_list -> type_qualifier specifier_qualifier_list\n");}
						|type_qualifier
						{printf("\tReduced : specifier_qualifier_list -> type_qualifier\n");}
						;

struct_declarator_list
					  :struct_declarator {printf("\tReduced : struct_declarator_list -> struct_declarator\n");}
					  |struct_declarator_list COMMA struct_declarator
					  {printf("\tReduced : struct_declarator_list -> struct_declarator_list COMMA struct_declarator\n");}
					  ;

struct_declarator
				 :declarator{printf("\tReduced : struct_declarator -> declarator\n");}
				 |declarator COLON constant_expression {printf("\tReduced : struct_declarator -> declarator COLON constant_expression\n");}
				 |COLON constant_expression {printf("\tReduced : struct_declarator -> COLON constant_expression\n");}
				 ;

enum_specifier
			  :ENUM IDENTIFIER OPEN_BRACES enumerator_list CLOSE_BRACES
			  {printf("\tReduced : enum_specifier -> ENUM IDENTIFIER OPEN_BRACES enumerator_list CLOSE_BRACES\n");}
			  |ENUM OPEN_BRACES enumerator_list CLOSE_BRACES
			  {printf("\tReduced : enum_specifier -> ENUM OPEN_BRACES enumerator_list CLOSE_BRACES\n");}
			  |ENUM IDENTIFIER {printf("\tReduced : enum_specifier -> ENUM IDENTIFIER\n");}
			  ;

enumerator_list
			   :enumerator {printf("\tReduced : enumerator_list -> enumerator\n");}
			   |enumerator_list COMMA enumerator {printf("\tReduced : enumerator_list -> enumerator_list COMMA enumerator\n");}
			   ;

enumerator
		  :IDENTIFIER {printf("\tReduced : enumerator -> IDENTIFIER\n");}
		  |IDENTIFIER EQUALS constant_expression {printf("\tReduced : enumerator -> IDENTIFIER EQUALS constant_expression\n");}
		  ;

declarator
		  :pointer direct_declarator {printf("\tReduced : declarator -> pointer direct_declarator\n");}
		  |direct_declarator {printf("\tReduced : declarator -> direct_declarator\n");strcat(table[id-1].size,"");}
		  ;

direct_declarator
				 :IDENTIFIER
				 {
					printf("\tReduced : direct_declarator -> IDENTIFIER\n");

					check($1);
				    insert($1,"NULL",lines);

				 }
				 |OPEN_PARANTHESES declarator CLOSE_PARANTHESES {printf("\tReduced : direct_declarator -> OPEN_PARANTHESES declarator CLOSE_PARANTHESES\n");}
				 |direct_declarator OPEN_SQ_BRACKET constant_expression CLOSE_SQ_BRACKET
				 {
                    printf("\tReduced : direct_declarator -> direct_declarator OPEN_SQ_BRACKET constant_expression CLOSE_SQ_BRACKET\n");
                    printf("%s\n",$3);
                    strcat(table[id-1].size,$3);
                    strcat(table[id-1].size,",");
                 }
				 |direct_declarator OPEN_SQ_BRACKET CLOSE_SQ_BRACKET
				 {printf("\tReduced : direct_declarator -> direct_declarator OPEN_SQ_BRACKET CLOSE_SQ_BRACKET\n");}
				 |direct_declarator OPEN_PARANTHESES parameter_type_list CLOSE_PARANTHESES
				 {printf("\tReduced : direct_declarator -> direct_declarator OPEN_PARANTHESES parameter_type_list CLOSE_PARANTHESES\n");}
				 |direct_declarator OPEN_PARANTHESES identifier_list CLOSE_PARANTHESES
				 {printf("\tReduced : direct_declarator -> direct_declarator OPEN_PARANTHESES identifier_list CLOSE_PARANTHESES\n");}
				 |direct_declarator OPEN_PARANTHESES CLOSE_PARANTHESES
				 {printf("\tReduced : direct_declarator -> direct_declarator OPEN_PARANTHESES CLOSE_PARANTHESES\n");}
				 ;

pointer
	   :MULTIPLY type_qualifier_list {printf("\tReduced : pointer -> MULTIPLY type_qualifier_list\n");}
	   |MULTIPLY {printf("\tReduced : pointer -> MULTIPLY\n");}
	   |MULTIPLY type_qualifier_list pointer {printf("\tReduced : pointer -> MULTIPLY type_qualifier_list pointer\n");}
	   |MULTIPLY pointer {printf("\tReduced : pointer -> MULTIPLY pointer\n");}
	   ;

type_qualifier_list
				   :type_qualifier {printf("\tReduced : type_qualifier_list -> type_qualifier\n");}
				   |type_qualifier_list type_qualifier {printf("\tReduced : type_qualifier_list -> type_qualifier_list type_qualifier\n");}
				   ;

parameter_type_list
				   :parameter_list {printf("\tReduced : parameter_type_list -> parameter_list\n");}
				   |parameter_list COMMA THREE_DOT {printf("\tReduced : parameter_type_list -> parameter_list COMMA THREE_DOT\n");}
				   ;

parameter_list
			  :parameter_declaration {printf("\tReduced : parameter_list -> parameter_declaration\n");}
			  |parameter_list COMMA parameter_declaration {printf("\tReduced : parameter_list -> parameter_list COMMA parameter_declaration\n");}
			  ;

parameter_declaration
					 :declaration_specifiers declarator {printf("\tReduced : parameter_declaration -> declaration_specifiers declarator\n");}
					 |declaration_specifiers abstract_declarator
					 {printf("\tReduced : parameter_declaration -> declaration_specifiers abstract_declarator\n");}
					 |declaration_specifiers {printf("\tReduced : parameter_declaration -> declaration_specifiers\n");}
					 ;

identifier_list
			   :IDENTIFIER {printf("\tReduced : identifier_list -> IDENTIFIER\n");}
			   |identifier_list COMMA IDENTIFIER {printf("\tReduced : identifier_list -> identifier_list COMMA IDENTIFIER\n");}
			   ;

initializer
		   :assignment_expression {printf("\tReduced : initializer -> assignment_expression\n");}
		   |OPEN_BRACES initializer_list CLOSE_BRACES
		   {
            printf("\tReduced : initializer -> OPEN_BRACES initializer_list CLOSE_BRACES\n");
            strcpy(table[id-1].initial,initial_list);printf("%s\n",initial_list);
            if(!strcmp(table[id-1].size,""))
            {
                table[id-1].size[0]=(char)(size_not_given+48);
                table[id-1].size[1]='\0';
            }
           }
		   |OPEN_BRACES initializer_list COMMA CLOSE_BRACES {printf("\tReduced : initializer -> OPEN_BRACES initializer_list COMMA CLOSE_BRACES\n");}
		   ;

initializer_list
				:initializer {printf("\tReduced : initializer_list -> initializer\n");}
				|initializer_list COMMA initializer {printf("\tReduced : initializer_list -> initializer_list COMMA initializer\n");}
				;

type_name
		 :specifier_qualifier_list abstract_declarator {printf("\tReduced : type_name -> specifier_qualifier_list abstract_declarator\n");}
		 |specifier_qualifier_list {printf("\tReduced : type_name -> specifier_qualifier_list\n");}
		 ;

abstract_declarator
			       :pointer {printf("\tReduced : abstract_declarator ->  pointer\n");}
				   |pointer direct_abstract_declarator {printf("\tReduced : abstract_declarator ->  pointer direct_abstract_declarator\n");}
				   |direct_abstract_declarator {printf("\tReduced : abstract_declarator -> direct_abstract_declarator\n");}
				   ;

direct_abstract_declarator
						  :OPEN_PARANTHESES abstract_declarator CLOSE_PARANTHESES
						  {printf("\tReduced : direct_abstract_declarator -> OPEN_PARANTHESES abstract_declarator CLOSE_PARANTHESES\n");}
						  |direct_abstract_declarator OPEN_SQ_BRACKET constant_expression CLOSE_SQ_BRACKET
						  {printf("\tReduced : direct_abstract_declarator -> direct_abstract_declarator OPEN_SQ_BRACKET constant_expression CLOSE_SQ_BRACKET\n");}
						  |OPEN_SQ_BRACKET constant_expression CLOSE_SQ_BRACKET
						  {printf("\tReduced : direct_abstract_declarator -> OPEN_SQ_BRACKET constant_expression CLOSE_SQ_BRACKET\n");}
						  |direct_abstract_declarator OPEN_SQ_BRACKET CLOSE_SQ_BRACKET
                          {printf("\tReduced : direct_abstract_declarator -> direct_abstract_declarator OPEN_SQ_BRACKET CLOSE_SQ_BRACKET\n");}
						  |OPEN_SQ_BRACKET CLOSE_SQ_BRACKET
						  {printf("\tReduced : direct_abstract_declarator -> OPEN_SQ_BRACKET CLOSE_SQ_BRACKET\n");}
						  |direct_abstract_declarator OPEN_PARANTHESES parameter_type_list CLOSE_PARANTHESES
						  {printf("\tReduced : direct_abstract_declarator -> direct_abstract_declarator OPEN_PARANTHESES parameter_type_list CLOSE_PARANTHESES\n");}
						  |OPEN_PARANTHESES parameter_type_list CLOSE_PARANTHESES
						  {printf("\tReduced : direct_abstract_declarator -> OPEN_PARANTHESES parameter_type_list CLOSE_PARANTHESES\n");}
						  |direct_abstract_declarator OPEN_PARANTHESES CLOSE_PARANTHESES
						  {printf("\tReduced : direct_abstract_declarator -> direct_abstract_declarator OPEN_PARANTHESES CLOSE_PARANTHESES\n");}
						  |OPEN_PARANTHESES CLOSE_PARANTHESES
						  {printf("\tReduced : direct_abstract_declarator -> OPEN_PARANTHESES CLOSE_PARANTHESES\n");}
						  ;


statement
		 :labeled_statement {printf("\tReduced : statement -> labeled_statement\n");}
		 |expression_statement {printf("\tReduced : statement -> expression_statement\n");}
		 |compound_statement {printf("\tReduced : statement -> compound_statement\n");}
		 |selection_statement {printf("\tReduced : statement -> selection_statement\n");}
		 |iteration_statement {printf("\tReduced : statement -> iteration_statement\n");}
		 |jump_statement {printf("\tReduced : statement -> jump_statement\n");}
		 ;

labeled_statement
				 :IDENTIFIER COLON statement {printf("\tReduced : labeled_statement -> IDENTIFIER COLON statement\n");}
				 |CASE constant_expression COLON statement {printf("\tReduced : labeled_statement -> CASE constant_expression COLON statement\n");}
				 |DEFAULT COLON statement {printf("\tReduced : labeled_statement -> DEFAULT COLON statement\n");}
				 ;

expression_statement
					:expression SEMI_COLON {printf("\tReduced : expression_statement -> expression SEMI_COLON\n");}
					|SEMI_COLON {printf("\tReduced : expression_statement -> SEMI_COLON\n");}
					;

compound_statement
				  :OPEN_BRACES declaration_list statement_list CLOSE_BRACES {printf("\tReduced : compound_statement -> OPEN_BRACES declaration_list statement_list CLOSE_BRACES\n");}
				  |OPEN_BRACES declaration_list CLOSE_BRACES {printf("\tReduced : compound_statement -> OPEN_BRACES declaration_list CLOSE_BRACES\n");}
				  |OPEN_BRACES statement_list CLOSE_BRACES {printf("\tReduced : compound_statement -> OPEN_BRACES statement_list CLOSE_BRACES\n");}
				  |OPEN_BRACES CLOSE_BRACES {printf("\tReduced : compound_statement -> OPEN_BRACES CLOSE_BRACES\n");}
				  ;

statement_list
			  :statement {printf("\tReduced : statement_list -> statement\n");}
			  |statement_list statement {printf("\tReduced : statement_list -> statement_list statement\n");}
			  ;
selection_statement
                   :IF OPEN_PARANTHESES expression CLOSE_PARANTHESES
                    {
                    generate();
                    tname[0]='L';
                    fprintf(fp,"IF FALSE %s, goto %s\n",$3,tname);
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,$3);
                    strcpy(quad[idx].operator,"IF");
                    idx++;
                    top++;
                    strcpy(label[top],tname);
                    printf("\t selection_statement -> IF OPEN_PARANTHESES expression CLOSE_PARANTHESES statement leftfactor\n");
                    }
                    statement leftfactor
                    |SWITCH OPEN_PARANTHESES expression CLOSE_PARANTHESES statement
                    {printf("\tReduced : selection_statement -> SWITCH OPEN_PARANTHESES expression CLOSE_PARANTHESES statement\n");}
                    ;
leftfactor
           :{
            fprintf(fp,"%s :\n",label[top]);
            strcpy(quad[idx].operator,"LABEL");
            strcpy(quad[idx].result,label[top]);
            idx++;
            top--;
            printf("\tReduced : leftfactor -> action\n");
            }
           |ELSE
            {
                 generate();
                 tname[0]='L';
                 fprintf(fp,"goto %s\n",tname);
                 strcpy(quad[idx].operator,"GOTO");
                 top1++;
                 strcpy(label1[top1],tname);
                 fprintf(fp,"%s :\n",label[top]);
                  strcpy(quad[idx].operator,"LABEL");
                 strcpy(quad[idx].result,label[top]);
                 idx++;
                 top--;
                 printf("\tReduced : leftfactor -> action ELSE statement\n");
            }
            statement
            {

                fprintf(fp,"%s :\n",label1[top1]);
                strcpy(quad[idx].operator,"LABEL");
                strcpy(quad[idx].result,label1[top1]);
                idx++;
                top1--;
            }
           ;

iteration_statement
				   :{
				      generate();
                      tname[0]='L';
                      fprintf(fp,"%s:\n",tname);

                       strcpy(quad[idx].result,tname);
                       strcpy(quad[idx].operator,"LABEL");
                      idx++;
                      top2++;
                      strcpy(label2[top2],tname);
                    }
				    WHILE OPEN_PARANTHESES expression CLOSE_PARANTHESES
				    {
				       generate();
                       tname[0]='L';
                       fprintf(fp,"IF FALSE %s, goto %s\n",$4,tname);
                       strcpy(quad[idx].result,tname);
                       strcpy(quad[idx].op1,$4);
                       strcpy(quad[idx].operator,"IF");
                        idx++;
                       top3++;
                       strcpy(label3[top3],tname);
                    }
                    statement
                    {
                        printf("\tReduced : iteration_statement -> WHILE OPEN_PARANTHESES expression CLOSE_PARANTHESES statement\n");
                        fprintf(fp,"goto %s\n",label2[top2]);
                        strcpy(quad[idx].result,label2[top2]);
                        strcpy(quad[idx].operator,"GOTO");
                        idx++;

                        top2--;
                        fprintf(fp,"%s:\n",label3[top3]);
                        strcpy(quad[idx].result,label3[top3]);
                         strcpy(quad[idx].operator,"LABEL");

                       idx++;
                        top3--;
                    }
				   |DO statement WHILE OPEN_PARANTHESES expression CLOSE_PARANTHESES SEMI_COLON {printf("\tReduced : iteration_statement -> DO statement WHILE OPEN_PARANTHESES expression CLOSE_PARANTHESES SEMI_COLON\n");}
				   |FOR OPEN_PARANTHESES expression SEMI_COLON expression SEMI_COLON expression CLOSE_PARANTHESES statement {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES expression SEMI_COLON expression SEMI_COLON expression CLOSE_PARANTHESES statement\n");}
				   |FOR OPEN_PARANTHESES expression SEMI_COLON expression SEMI_COLON CLOSE_PARANTHESES statement {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES expression SEMI_COLON expression SEMI_COLON CLOSE_PARANTHESES statement\n");}
				   |FOR OPEN_PARANTHESES expression SEMI_COLON SEMI_COLON expression CLOSE_PARANTHESES statement {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES expression SEMI_COLON SEMI_COLON expression CLOSE_PARANTHESES statement\n");}
				   |FOR OPEN_PARANTHESES expression SEMI_COLON SEMI_COLON CLOSE_PARANTHESES statement {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES expression SEMI_COLON SEMI_COLON CLOSE_PARANTHESES statement\n");}
				   |FOR OPEN_PARANTHESES SEMI_COLON expression SEMI_COLON expression CLOSE_PARANTHESES statement {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES SEMI_COLON expression SEMI_COLON expression CLOSE_PARANTHESES statement\n");}
				   |FOR OPEN_PARANTHESES SEMI_COLON expression SEMI_COLON CLOSE_PARANTHESES statement {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES SEMI_COLON expression SEMI_COLON CLOSE_PARANTHESES statement\n");}
				   |FOR OPEN_PARANTHESES SEMI_COLON SEMI_COLON expression CLOSE_PARANTHESES statement {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES SEMI_COLON SEMI_COLON expression CLOSE_PARANTHESES statement\n");}
				   |FOR OPEN_PARANTHESES SEMI_COLON SEMI_COLON CLOSE_PARANTHESES statement {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES SEMI_COLON SEMI_COLON CLOSE_PARANTHESES statement\n");}
				   ;

jump_statement
			  :GOTO IDENTIFIER SEMI_COLON {printf("\tReduced : jump_statement -> GOTO IDENTIFIER SEMI_COLON\n");}
			  |CONTINUE SEMI_COLON {printf("\tReduced : jump_statement -> CONTINUE SEMI_COLON\n");}
			  |BREAK SEMI_COLON {printf("\tReduced : jump_statement -> BREAK SEMI_COLON\n");}
			  |RETURN expression SEMI_COLON {printf("\tReduced : jump_statement -> RETURN expression SEMI_COLON\n");}
			  |RETURN SEMI_COLON {printf("\tReduced : jump_statement -> RETURN SEMI_COLON\n");}
			  ;

expression
		  :assignment_expression
		  {
            printf("\tReduced : expression -> assignment_expression\n");
            strcpy($$,$1);
          }
		  |expression COMMA assignment_expression {printf("\tReduced : expression -> expression COMMA assignment_expression\n");}
		  ;

assignment_expression
					 :conditional_expression
					 {
                        printf("\tReduced : assignment_expression -> conditional_expression\n");
                        strcpy($$,$1);
                     }
					 |unary_expression assignment_operator assignment_expression
					 {
                        printf("\tReduced : assignment_expression -> unary_expression assignment_operator assignment_expression\n");
                        printf("%s %s\n",$1,$3);
                        for(i=0;i<id;i++)
                        {
                               printf("%s %d\n",table[i].name,table[i].no_dimen);
                            if(((!strcmp(table[i].name,$1)) && table[i].no_dimen>0) || ((!strcmp(table[i].name,$3)) && table[i].no_dimen>0))
                            {
                                fprintf(fp,"Dimension Mismatch Exiting....\n");
                                printf("Dimension Mismatch Exiting....\n");
                                exit(0);
                            }
                        }
                        if(!strcmp($2,"="))
                        {
                            fprintf(fp,"%s = %s\n",$1,$3);
                            strcpy(quad[idx].result,$1);
                            strcpy(quad[idx].op1,$3);

                            idx++;
                        }

                        else if(!strcmp($2,"*="))
                        {
                            fprintf(fp,"$s = %s*%s\n",$1,$1,$3);
                            strcpy(quad[idx].result,$1);
                            strcpy(quad[idx].op1,$1);
                            strcpy(quad[idx].op2,$3);
                            strcpy(quad[idx].operator,"*");
                            idx++;
                        }

                        else if(!strcmp($2,"/="))
                        {
                            fprintf(fp,"$s = %s/%s\n",$1,$1,$3);
                            strcpy(quad[idx].result,$1);
                            strcpy(quad[idx].op1,$1);
                            strcpy(quad[idx].op2,$3);
                            strcpy(quad[idx].operator,"/");
                            idx++;
                        }
                        else if(!strcmp($2,"-="))
                        {
                            fprintf(fp,"$s = %s-%s\n",$1,$1,$3);
                            strcpy(quad[idx].result,$1);
                            strcpy(quad[idx].op1,$1);
                            strcpy(quad[idx].op2,$3);
                            strcpy(quad[idx].operator,"-");
                            idx++;
                        }
                        else if(!strcmp($2,"+="))
                        {
                            fprintf(fp,"%s = %s+%s\n",$1,$1,$3);
                            strcpy(quad[idx].result,$1);
                            strcpy(quad[idx].op1,$1);
                            strcpy(quad[idx].op2,$3);
                            strcpy(quad[idx].operator,"+");
                            idx++;
                        }
                        else if(!strcmp($2,"%="))
                        {
                            fprintf(fp,"$s = %s %% %s\n",$1,$1,$3);
                            strcpy(quad[idx].result,$1);
                            strcpy(quad[idx].op1,$1);
                            strcpy(quad[idx].op2,$3);
                            strcpy(quad[idx].operator,"%");
                            idx++;
                        }

                         right=0;
                     }
					 ;

assignment_operator
				   :EQUALS
				   {
                        printf("\tReduced : assignment_operator -> EQUALS\n");
                        strcpy($$,"=");
                        right=1;
                   }
				   |SHORTHAND_MUL {printf("\tReduced : assignment_operator -> SHORTHAND_MUL\n");strcpy($$,"*=");}
				   |SHORTHAND_DIV {printf("\tReduced : assignment_operator -> SHORTHAND_DIV\n");strcpy($$,"/=");}
				   |SHORTHAND_MOD {printf("\tReduced : assignment_operator -> SHORTHAND_MOD\n");strcpy($$,"%=");}
				   |SHORTHAND_ADD {printf("\tReduced : assignment_operator -> SHORTHAND_ADD\n");strcpy($$,"+=");}
				   |SHORTHAND_SUB {printf("\tReduced : assignment_operator -> SHORTHAND_SUB\n");strcpy($$,"-=");}
				   |SHORTHAND_LSHIFT {printf("\tReduced : assignment_operator -> SHORTHAND_LSHIFT\n");}
				   |SHORTHAND_RSHIFT {printf("\tReduced : assignment_operator -> SHORTHAND_RSHIFT\n");}
				   |SHORTHAND_AND {printf("\tReduced : assignment_operator -> SHORTHAND_AND\n");}
				   |SHORTHAND_XOR {printf("\tReduced : assignment_operator -> SHORTHAND_XOR\n");}
				   |SHORTHAND_OR {printf("\tReduced : assignment_operator -> SHORTHAND_OR\n");}
				   ;

conditional_expression
					  :logical_OR_expression
					  {
                        printf("\tReduced : conditional_expression -> logical_OR_expression\n");
                        strcpy($$,$1);
					  }
					  |logical_OR_expression TERNARY expression COLON conditional_expression {printf("\tReduced : conditional_expression -> logical_OR_expression TERNARY expression COLON conditional_expression\n");}
					  ;

constant_expression
				   :conditional_expression
				   {
                    printf("\tReduced : constant_expression -> conditional_expression\n");
                    strcpy($$,$1);
                   }
				   ;

logical_OR_expression
					 :logical_AND_expression
					 {
                        printf("\tReduced : logical_OR_expression -> logical_AND_expression\n");
                        strcpy($$,$1);
                     }
					 |logical_OR_expression OR logical_AND_expression
					 {
                        printf("\tReduced : logical_OR_expression -> logical_OR_expression OR logical_AND_expression\n");
                        generate();
                        fprintf(fp,"%s = %s OR %s\n",tname,$1,$3);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,$1);
                        strcpy(quad[idx].op2,$3);
                        strcpy(quad[idx].operator,"||");
                        idx++;
                        strcpy($$,tname);
                     }
					 ;

logical_AND_expression
					  :inclusive_OR_expression
					  {
                        printf("\tReduced : logical_AND_expression -> inclusive_OR_expression\n");
                        strcpy($$,$1);
                      }
					  |logical_AND_expression AND inclusive_OR_expression
					  {
                        printf("\tReduced : logical_AND_expression -> logical_AND_expression AND inclusive_OR_expression\n");
                        generate();
                        fprintf(fp,"%s = %s AND %s\n",tname,$1,$3);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,$1);
                        strcpy(quad[idx].op2,$3);
                        strcpy(quad[idx].operator,"&&");
                        idx++;
                        strcpy($$,tname);
                      }
					  ;

inclusive_OR_expression
					   :exclusive_OR_expression
					   {
                        printf("\tReduced : inclusive_OR_expression -> exclusive_OR_expression\n");
                        strcpy($$,$1);
                       }
					   |inclusive_OR_expression BITWISE_OR exclusive_OR_expression
					   {
                            printf("\tReduced : inclusive_OR_expression -> inclusive_OR_expression BITWISE_OR exclusive_OR_expression\n");
                            generate();
                            fprintf(fp,"%s = %s BITWISE_OR %s\n",tname,$1,$3);
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,$1);
                            strcpy(quad[idx].op2,$3);
                            strcpy(quad[idx].operator,"|");
                            idx++;
                            strcpy($$,tname);
                       }
					   ;

exclusive_OR_expression
					   :AND_expression
					   {
                            printf("\tReduced : exclusive_OR_expression -> AND_expression\n");
                            strcpy($$,$1);
                       }
					   |exclusive_OR_expression XOR AND_expression
					   {
                            printf("\tReduced : exclusive_OR_expression -> exclusive_OR_expression XOR AND_expression\n");
                            generate();
                            fprintf(fp,"%s = %s XOR %s\n",tname,$1,$3);
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,$1);
                            strcpy(quad[idx].op2,$3);
                            strcpy(quad[idx].operator,"^");
                            idx++;
                            strcpy($$,tname);
                       }
					   ;

AND_expression
			  :equality_expression
			  {
                    printf("\tReduced : AND_expression -> equality_expression\n");
                    strcpy($$,$1);
              }
			  |AND_expression BITWISE_AND equality_expression
			  {
                    printf("\tReduced : AND_expression -> AND_expression BITWISE_AND equality_expression\n");
                    generate();
                    fprintf(fp,"%s = %s BITWISE_AND %s\n",tname,$1,$3);
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,$1);
                    strcpy(quad[idx].op2,$3);
                    strcpy(quad[idx].operator,"&");
                    idx++;
                    strcpy($$,tname);
              }

equality_expression
				   :relational_expression
				   {
                        printf("\tReduced : equality_expression -> relational_expression\n");
                        strcpy($$,$1);
                   }
				   |equality_expression IS_EQUAL_TO relational_expression
				   {
                        printf("\tReduced : equality_expression -> equality_expression IS_EQUAL_TO relational_expression\n");
                        printf("%s==%s\n",$1,$3);
                        strcpy(s3,$1);
                        strcpy(s4,$3);
                        check_arr($1,$3);

                        generate();
                        fprintf(fp,"%s = %s EQ %s\n",tname,s3,s4);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,s3);
                        strcpy(quad[idx].op2,s4);
                        strcpy(quad[idx].operator,"==");
                        idx++;
                        strcpy($$,tname);


                    }
				   |equality_expression NOT_EQUAL_TO relational_expression
				   {
                        printf("\tReduced : equality_expression -> equality_expression NOT_EQUAL_TO relational_expression\n");
                        strcpy(s3,$1);
                        strcpy(s4,$3);
                        check_arr($1,$3);

                        generate();
                        fprintf(fp,"%s = %s NE %s\n",tname,$1,$3);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,s3);
                        strcpy(quad[idx].op2,s4);
                        strcpy(quad[idx].operator,"!=");
                        idx++;
                        strcpy($$,tname);
                   }
				   ;

relational_expression
					 :shift_expression
					 {
                        printf("\tReduced : relational_expression -> shift_expression\n");
                        strcpy($$,$1);
                      }
					 |relational_expression LESS_THAN shift_expression
					 {
                        printf("\tReduced : relational_expression -> relational_expression LESS_THAN shift_expression\n");

                        strcpy(s3,$1);
                        strcpy(s4,$3);
                        check_arr($1,$3);

                        generate();
                        fprintf(fp,"%s = %s LT %s\n",tname,s3,s4);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,s3);
                        strcpy(quad[idx].op2,s4);
                        strcpy(quad[idx].operator,"<");
                        idx++;
                        strcpy($$,tname);
                     }
					 |relational_expression GREATER_THAN shift_expression
					 {
                        printf("\tReduced : relational_expression -> relational_expression GREATER_THAN shift_expression\n");
                        strcpy(s3,$1);
                        strcpy(s4,$3);
                        check_arr($1,$3);

                        generate();
                        fprintf(fp,"%s = %s GT %s\n",tname,s3,s4);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,s3);
                        strcpy(quad[idx].op2,s4);
                        strcpy(quad[idx].operator,">");
                        idx++;
                        strcpy($$,tname);
                     }
					 |relational_expression LESS_THAN_EQUAL shift_expression
					 {
                        printf("\tReduced : relational_expression -> relational_expression LESS_THAN_EQUAL shift_expression\n");
                        strcpy(s3,$1);
                        strcpy(s4,$3);
                        check_arr($1,$3);

                        generate();
                        fprintf(fp,"%s = %s LT_EQ %s\n",tname,s3,s4);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,s3);
                        strcpy(quad[idx].op2,s4);
                        strcpy(quad[idx].operator,"<=");
                        idx++;
                        strcpy($$,tname);
                     }
					 |relational_expression GREATER_THAN_EQUAL shift_expression
					 {
                        printf("\tReduced : relational_expression -> relational_expression GREATER_THAN_EQUAL shift_expression\n");
                        strcpy(s3,$1);
                        strcpy(s4,$3);
                        check_arr($1,$3);

                        generate();
                        fprintf(fp,"%s = %s GT_EQ %s\n",tname,s3,s4);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,s3);
                        strcpy(quad[idx].op2,s4);
                        strcpy(quad[idx].operator,">=");
                        idx++;
                        strcpy($$,tname);
                     }
					 ;

shift_expression
				:additive_expression
				{
                    printf("\tReduced : shift_expression -> additive_expression\n");
                    strcpy($$,$1);
                }
			    |shift_expression L_SHIFT additive_expression
			    {
                    printf("\tReduced : shift_expression -> shift_expression L_SHIFT additive_expression\n");
                    generate();
                    fprintf(fp,"%s = %s L_SHIFT %s\n",tname,$1,$3);
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,$1);
                    strcpy(quad[idx].op2,$3);
                    strcpy(quad[idx].operator,"<<");
                    idx++;
                    strcpy($$,tname);
                }
				|shift_expression R_SHIFT additive_expression
				{
                    printf("\tReduced : shift_expression -> shift_expression R_SHIFT additive_expression\n");
                    generate();
                    fprintf(fp,"%s = %s R_SHIFT %s\n",tname,$1,$3);
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,$1);
                    strcpy(quad[idx].op2,$3);
                    strcpy(quad[idx].operator,">>");
                    idx++;
                    strcpy($$,tname);
                }
				;

additive_expression
				   :multiplicative_expression
				   {
                        printf("\tReduced : additive_expression -> multiplicative_expression\n");
                        strcpy($$,$1);
                   }
				   |additive_expression ADD multiplicative_expression
				   {
                        printf("\tReduced : additive_expression -> additive_expression ADD multiplicative_expression\n");
                        generate();
                        fprintf(fp,"%s=%s + %s\n",tname,$1,$3);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,$1);
                        strcpy(quad[idx].op2,$3);
                        strcpy(quad[idx].operator,"+");
                        idx++;
                        strcpy($$,tname);
                   }
				   |additive_expression SUBTRACT multiplicative_expression
				   {
                        printf("\tReduced : additive_expression -> additive_expression SUBTRACT multiplicative_expression\n");
                        generate();
                        fprintf(fp,"%s=%s - %s\n",tname,$1,$3);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,$1);
                        strcpy(quad[idx].op2,$3);
                        strcpy(quad[idx].operator,"-");
                        idx++;
                        strcpy($$,tname);
                   }
				   ;

multiplicative_expression
						 :cast_expression
						 {
                            printf("\tReduced : multiplicative_expression -> cast_expression\n");
                            strcpy($$,$1);
                         }
						 |multiplicative_expression MULTIPLY cast_expression
						 {
                            printf("\tReduced : multiplicative_expression -> multiplicative_expression MULTIPLY cast_expression\n");
                            generate();
                            fprintf(fp,"%s=%s * %s\n",tname,$1,$3);
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,$1);
                            strcpy(quad[idx].op2,$3);
                            strcpy(quad[idx].operator,"*");
                            idx++;
                            strcpy($$,tname);
                         }
						 |multiplicative_expression DIVIDE cast_expression
						 {
                            printf("\tReduced : multiplicative_expression -> multiplicative_expression DIVIDE cast_expression\n");
                            generate();
                            fprintf(fp,"%s=%s / %s\n",tname,$1,$3);
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,$1);
                            strcpy(quad[idx].op2,$3);
                            strcpy(quad[idx].operator,"/");
                            idx++;
                            strcpy($$,tname);
                         }
						 |multiplicative_expression MOD cast_expression
						 {
                            printf("\tReduced : multiplicative_expression -> multiplicative_expression MOD cast_expression\n");
                            generate();
                            fprintf(fp,"%s=%s %% %s\n",tname,$1,$3);
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,$1);
                            strcpy(quad[idx].op2,$3);
                            strcpy(quad[idx].operator,"%%");
                            idx++;
                            strcpy($$,tname);
                         }
						 ;

cast_expression
			   :unary_expression
			   {
                    printf("\tReduced : cast_expression -> unary_expression\n");
                    strcpy($$,$1);
               }
			   |OPEN_PARANTHESES type_name CLOSE_PARANTHESES cast_expression
			   {printf("\tReduced : cast_expression -> OPEN_PARANTHESES type_name CLOSE_PARANTHESES cast_expression\n");}
			   ;

unary_expression:postfix_expression
                {
                        printf("\tReduced : unary_expression -> postfix_expression\n");
                        strcpy($$,$1);
                }
				|INCREMENT unary_expression
				{
                    printf("\tReduced : unary_expression -> INCREMENT unary_expression\n");
                    generate();
                    fprintf(fp,"%s=%s\n",tname,$2);
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,$2);
                    idx++;
                    fprintf(fp,"%s=%s+1\n",$2,$2);
                    strcpy(quad[idx].result,$2);
                    strcpy(quad[idx].op1,$2);
                    strcpy(quad[idx].op2,"1");
                    strcpy(quad[idx].operator,"+");
                    idx++;
                    strcpy($$,tname);
                }
				|DECREMENT unary_expression
				{
                    printf("\tReduced : unary_expression -> DECREMENT unary_expression\n");
                    generate();
                    fprintf(fp,"%s=%s\n",tname,$2);
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,$2);
                    idx++;
                    fprintf(fp,"%s=%s-1\n",$2,$2);
                    strcpy(quad[idx].result,$2);
                    strcpy(quad[idx].op1,$2);
                    strcpy(quad[idx].op2,"1");
                    strcpy(quad[idx].operator,"-");
                    idx++;
                    strcpy($$,tname);
                }
				|unary_operator cast_expression
				{
                    printf("\tReduced : unary_expression -> unary_operator cast_expression\n");
                    generate();
                    fprintf(fp,"%s= %s%s \n",tname,$1,$2);
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,$1);
                    strcpy(quad[idx].op1,$2);
                    idx++;
                    strcpy($$,tname);
                }
				|SIZEOF unary_expression {printf("\tReduced : unary_expression -> SIZEOF unary_expression\n");}
				|SIZEOF OPEN_PARANTHESES type_name CLOSE_PARANTHESES
				{printf("\tReduced : unary_expression -> SIZEOF OPEN_PARANTHESES type_name CLOSE_PARANTHESES\n");}
				;

unary_operator
			  :BITWISE_AND {printf("\tReduced : unary_operator -> BITWISE_AND\n");strcpy($$,"&");}
			  |MULTIPLY {printf("\tReduced : unary_operator -> MULTIPLY\n");strcpy($$,"*");}
			  |ADD {printf("\tReduced : unary_operator -> ADD\n");strcpy($$,"+");}
			  |SUBTRACT {printf("\tReduced : unary_operator -> SUBTRACT\n");strcpy($$,"-");if(flag==1)
                strcat(initial_list,"-");}
			  |NEGATION {printf("\tReduced : unary_operator -> NEGATION\n");strcpy($$,"~");}
			  |NOT {printf("\tReduced : unary_operator -> NOT\n");strcpy($$,"!");}
			  ;

postfix_expression
				  :primary_expression
				  {
                    printf("\tReduced : postfix_expression -> primary_expression\n");
                    strcpy($$,$1);
                  }
				  |postfix_expression OPEN_SQ_BRACKET expression CLOSE_SQ_BRACKET
				  {
                        printf("\tReduced : postfix_expression -> postfix_expression OPEN_SQ_BRACKET expression CLOSE_SQ_BRACKET\n");

                        /*end=0 marks beginning of new Array Expression or ending of previous expression
                          right=1 for processing the right part of the statement
                          curr_cnt denotes the dimension after which all other dimensions are to be multiplied
                          for left array not assigned to a tname variable but for right all array expressions assigned
                          to a temproray tname variable */


                        if(end==0)
                        {
                            generate();
                            strcpy(s1,tname);
                            fprintf(fp,"%s = 0\n",tname);
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,"0");
                            idx++;
                            curr_cnt=0;
                        }


                        generate();
						printf("s1 = %s tname = %s curr_cnt = %d \n",s1,tname,curr_cnt);
                        fprintf(fp,"%s = %s\n",tname,$3);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,$3);
                        idx++;
                        for(i=0;i<id;i++)
                        {
                            if(!strcmp(table[i].name,$1))
                            break;
                        }
                        comma_cnt=0;
                        l=strlen(table[i].size);
                        num=0;
                        end=0;
                        for(j=0;j<l;j++)
                        {
                            if(table[i].size[j]==',')
                            {
                                if(comma_cnt>curr_cnt)
                                {
                                fprintf(fp,"%s = %s * %d\n",tname,tname,num);

                               int_to_str(num);


                                strcpy(quad[idx].result,tname);
                                strcpy(quad[idx].op1,tname);
                                strcpy(quad[idx].op2,num_string);
                                strcpy(quad[idx].operator,"*");
                                idx++;
                                end=1;
                                }

                                num=0;
                                comma_cnt++;
                            }
                        else
                            num= num*10+((int)table[i].size[j]-48);
                        }
                        fprintf(fp,"%s = %s + %s\n",s1,s1,tname);
                        strcpy(quad[idx].result,s1);
                        strcpy(quad[idx].op1,s1);
                        strcpy(quad[idx].op2,tname);
                        strcpy(quad[idx].operator,"+");
                        idx++;
                        curr_cnt++;

                        if(end==0)
                        {
                            printf("%s %s\n",table[i].name,table[i].datatype);
                            if((!strcmp(table[i].datatype,"int ")) || (!strcmp(table[i].datatype,"float ")))
                            {
                                fprintf(fp,"%s = %s * 4\n",s1,s1);
                                strcpy(quad[idx].result,s1);
                                strcpy(quad[idx].op1,s1);
                                strcpy(quad[idx].op2,"4");
                                strcpy(quad[idx].operator,"*");
                                idx++;
                            }
                            else if(!strcmp(table[i].datatype,"double "))
                            {
                                 fprintf(fp,"%s = %s * 8\n",s1,s1);
                                 strcpy(quad[idx].result,s1);
                                strcpy(quad[idx].op1,s1);
                                strcpy(quad[idx].op2,"8");
                                strcpy(quad[idx].operator,"*");
                                idx++;
                            }
                            else if(!strcmp(table[i].datatype,"char "))
                            {
                                 fprintf(fp,"%s = %s * 1\n",s1,s1);
                                 strcpy(quad[idx].result,s1);
                                strcpy(quad[idx].op1,s1);
                                strcpy(quad[idx].op2,"1");
                                strcpy(quad[idx].operator,"*");
                                idx++;
                            }
                            else
                            {
                                 fprintf(fp,"%s = %s * 8\n",s1,s1);
                                 strcpy(quad[idx].result,s1);
                                strcpy(quad[idx].op1,s1);
                                strcpy(quad[idx].op2,"8");
                                strcpy(quad[idx].operator,"*");
                                idx++;
                            }


                            if(right==1)
                            {
                            generate();
                            fprintf(fp,"%s = %s[%s]\n",tname,$1,s1);
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,$1);
                            strcpy(quad[idx].op2,s1);
                            strcpy(quad[idx].operator,"ARR_RT");
                            idx++;
                            strcpy($$,tname);
                            }
                            else
                            {
                            strcpy(s2,$1);
                            strcat(s2,"[");
                            strcat(s2,s1);
                            strcat(s2,"]");
                            strcpy($$,s2);

                            }
                        }

                  }
				  |postfix_expression OPEN_PARANTHESES argument_expression_list CLOSE_PARANTHESES
				  {printf("\tReduced : postfix_expression -> postfix_expression OPEN_PARANTHESES argument_expression_list CLOSE_PARANTHESES\n");}
				  |postfix_expression OPEN_PARANTHESES CLOSE_PARANTHESES
				  {printf("\tReduced : postfix_expression -> postfix_expression OPEN_PARANTHESES CLOSE_PARANTHESES\n");}
				  |postfix_expression DOT IDENTIFIER {printf("\tReduced : postfix_expression -> postfix_expression DOT IDENTIFIER\n");}
				  |postfix_expression LINK IDENTIFIER {printf("\tReduced : postfix_expression -> postfix_expression LINK IDENTIFIER\n");}
				  |postfix_expression INCREMENT
				  {
                        printf("\tReduced : postfix_expression -> postfix_expression INCREMENT\n");

                        fprintf(fp,"%s = %s+1\n",$1,$1);
                        strcpy(quad[idx].result,$1);
                        strcpy(quad[idx].op1,$1);
                        strcpy(quad[idx].op2,"1");
                        strcpy(quad[idx].operator,"+");
                                idx++;
                        strcpy($$,$1);
                  }
				  |postfix_expression DECREMENT
				  {
                        printf("\tReduced : postfix_expression -> postfix_expression DECREMENT\n");

                        fprintf(fp,"%s = %s-1\n",$1,$1);
                        strcpy(quad[idx].result,$1);
                        strcpy(quad[idx].op1,$1);
                        strcpy(quad[idx].op2,"1");
                        strcpy(quad[idx].operator,"-");
                        strcpy($$,$1);
				  }
				  ;

primary_expression
				  :IDENTIFIER
				  {
					printf("\tReduced : primary_expression -> IDENTIFIER \n");
                    printf("%s\n",$1);
					int f=0;
					for(i=0;i<id;i++)
					{
						if(!strcmp(table[i].name,$1))
						{
							f=1;
							break;
						}
					}
					if(f==0)
                    {
					printf("\n***** ERROR: Variable %s is Undeclared *****\n",$1);
					exit(0);
					}
                    strcpy($$,$1);
				  }
				  |constant {printf("\tReduced : primary_expression -> constant\n");}
				  |STRING_CONSTANT
				  {
                        printf("\tReduced : primary_expression -> STRING_CONSTANT\n");
                        strcpy(table[id-1].initial,$1);
                        if(!strcmp(table[id-1].size,""))
                        {
                            size_not_given=strlen($1);
                            table[id-1].size[0]=(char)(size_not_given+48);
                            table[id-1].size[1]='\0';
                        }
                        if(flag==1)
                            strcat(initial_list,$1);


                  }
				  |OPEN_PARANTHESES expression CLOSE_PARANTHESES
				  {
                        printf("\tReduced : primary_expression -> OPEN_PARANTHESES expression CLOSE_PARANTHESES\n");
                        strcpy($$,$2);
                  }
				  ;

argument_expression_list
						:assignment_expression {printf("\tReduced : argument_expression_list -> assignment_expression\n");}
						|argument_expression_list COMMA assignment_expression {printf("\tReduced : argument_expression_list -> argument_expression_list COMMA assignment_expression\n");}
						;

constant
		:NUMBER
		{
            printf("\tReduced : constant -> NUMBER\n");
            strcpy(temp,$1);
            if(flag==1)
                strcat(initial_list,$1);
            strcpy($$,$1);
        }
		|CHAR_CONSTANT
		{
            printf("\tReduced : constant -> CHAR_CONSTANT\n");
            strcpy(temp,$1);
            if(flag==1)
                strcat(initial_list,$1);
        }
		|REAL_NUMBER
		{
            printf("\tReduced : constant -> REAL_NUMBER\n");
            strcpy(temp,$1);
            if(flag==1)
                strcat(initial_list,$1);
        }
		|EXP_NUMBER
		{
            printf("\tReduced : constant -> EXP_NUMBER\n");
            strcpy(temp,$1);
            if(flag==1)
                strcat(initial_list,$1);
        }
		;

%%

#include "lex.yy.c"
int yyerror()
{
	printf("ERROR\n");
	exit(0);
}

void check(char s_name[50])
{
    printf("%s\n",s_name);

    for(i=0;i<id;i++)
	{
		if(!strcmp(table[i].name,s_name))
		{
		printf("\n***** ERROR: Duplicate Declaration: Variable %s is already declared in Line No. %d *****\n",s_name,table[i].line);
		exit(0);
		}
	}
}
void insert(char s_name[50],char s_type[50],int l)
{

	strcpy(table[id].name,s_name);
	strcpy(table[id].datatype,s_type);
	strcpy(table[id].initial,"0");
	table[id].line=l;
	strcpy(table[id].size,"");


	id++;
}
void lookup()
{

	printf("\n****************************SYMBOL TABLE*************************************\n");
	printf("Line No.  Identifier    Data Type\t          Dimension  Size  Initial\n\n");
	for(i=0;i<id;i++)
	{

	printf("%-10d  %-12s  %-24s  %-6d  %-6s %-10s\n\n",table[i].line,table[i].name,table[i].datatype,table[i].no_dimen,table[i].size,table[i].initial);
    }
}
void generate()
{
    static int count=0;
    count++;
    int num=count;
    tname[0]='t';
    tname[1]='_';
    tname[2]='0';
    tname[3]='0';
    tname[4]='0';
    tname[5]='0';
    tname[6]='0';
    tname[7]='0';

    if(num>9)
    {
        tname[8]=(num/10)+48;
        tname[9]=(num%10)+48;
        tname[10]='\0';
    }
    else
    {
    tname[8]=num+48;
    tname[9]='\0';
    }
    strcpy(temp_var[temp_cnt],tname);
    temp_cnt++;
}

int main(int argc,char *argv[])
{
         char arrname[1000];
         int dime,index[100];


        if(argc<2)
        {
                printf("Error detected due to file name missing\n");
                return -1;
        }

        fp=fopen(argv[2],"w");
        yyin = fopen(argv[1],"r");

        for(i=0;i<=200;i++)
        {
            strcpy(quad[i].op1,"NULL");
            strcpy(quad[i].op2,"NULL");
            strcpy(quad[i].operator,"NULL");
            strcpy(quad[i].result,"NULL");
        }

        yyparse();
        lookup();

        printf("*********************Quadruple Table*****************************************\n\n");
        printf("         Result  =\t  OP1\t    OPERATOR    OP2\n\n");
        for(i=0;i<idx;i++)
        {
        printf("%15s  =\t%10s %10s\t%s\n",quad[i].result,quad[i].op1,quad[i].operator,quad[i].op2);
        }

        fptr=fopen(argv[3],"w");
        generate_code();

        fclose(yyin);
        fclose(fp);
        fclose(fptr);

        return 0;
}

/* Assignment 4: Code Generation */



void generate_code()
{
    int i=0,j,k,f=0,l;
    char temp[50],s1[50],s2[50];
    fprintf(fptr,"\t.text\n.globl _main\n_main:\n\tpushl	%%ebp\n\tmovl	%%esp, %%ebp\n\tandl	$-16, %%esp\n");
    for(i=0;i<idx;i++)
    {
        if(quad[i].op1[0]>=48 && quad[i].op1[0]<=57)
        {
            strcpy(temp,"$");
            strcat(temp,quad[i].op1);
            strcpy(quad[i].op1,temp);
        }
        if(quad[i].op2[0]>=48 && quad[i].op2[0]<=57)
        {
            strcpy(temp,"$");
            strcat(temp,quad[i].op2);
            strcpy(quad[i].op2,temp);
        }
        if(!strcmp(quad[i].operator,"+"))
        {

              fprintf(fptr,"\tmovl	%s, %%eax\n  ",quad[i].op1);
              fprintf(fptr,"\taddl	%s, %%eax\n",quad[i].op2);
              fprintf(fptr,"\tmovl    %%eax, %s\n",quad[i].result);

        }
        else if(!strcmp(quad[i].operator,"*"))
        {

            fprintf(fptr,"\tmovl	%s, %%eax\n  ",quad[i].op1);
            fprintf(fptr,"\timull	%s, %%eax\n",quad[i].op2);
            fprintf(fptr,"\tmovl    %%eax, %s\n",quad[i].result);

        }
        else if(!strcmp(quad[i].operator,"-"))
        {
              printf("-\n");
              fprintf(fptr,"\tmovl	%s, %%eax\n  ",quad[i].op1);
              fprintf(fptr,"\tsubl	%s, %%eax\n",quad[i].op2);
              fprintf(fptr,"\tmovl    %%eax, %s\n",quad[i].result);
        }
        else if(!strcmp(quad[i].operator,"/"))
        {
            fprintf(fptr,"\tmovl	%s, %%eax\n movl	%s, %%ecx \n cltd\n idivl %%ecx\n movl %%eax, %s\n",quad[i].op1,quad[l].op2,quad[i].result);

        }
        else if(!strcmp(quad[i].operator,"<"))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tcmpl %%eax,%%edx\n");
            fprintf(fptr,"\tsetl %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,">"))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tcmpl %%eax,%%edx\n");
            fprintf(fptr,"\tsetg %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"<="))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tcmpl %%eax,%%edx\n");
            fprintf(fptr,"\tsetle %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,">="))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tcmpl %%eax,%%edx\n");
            fprintf(fptr,"\tsetge %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"=="))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tcmpl %%eax,%%edx\n");
            fprintf(fptr,"\tsete %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"!="))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tcmpl %%eax,%%edx\n");
            fprintf(fptr,"\tsetne %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }

        else if(!strcmp(quad[i].operator,"&"))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tandl %%eax,%%edx\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"|"))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\torl %%eax,%%edx\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"^"))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\txorl %%eax,%%edx\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"&&"))
        {
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op1);
            fprintf(fptr,"\ttestl %%eax,%%eax\n");
            generate();
            tname[0]='L';
            strcpy(temp,tname);
            fprintf(fptr,"\tje %s\n",tname);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\ttestl %%eax,%%eax\n");
            fprintf(fptr,"\tje %s\n",tname);
            fprintf(fptr,"\tmovl $1,%%eax\n");
            generate();
            tname[0]='L';
            fprintf(fptr,"\tjmp %s\n",tname);
            fprintf(fptr,"\t%s:\n",temp);
            fprintf(fptr,"\tmovl $1,%%eax\n");
            fprintf(fptr,"\t%s:\n",tname);
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"||"))
        {
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op1);
            fprintf(fptr,"\ttestl %%eax,%%eax\n");

            generate();
            tname[0]='L';
            fprintf(fptr,"\tjne %s\n",tname);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\ttestl %%eax,%%eax\n");

            strcpy(temp,tname);
            generate();
            tname[0]='L';
            fprintf(fptr,"\tje %s\n",tname);
            fprintf(fptr,"\t%s:\n",temp);
            fprintf(fptr,"\tmovl $1,%%eax\n");

            strcpy(temp,tname);
            generate();
            tname[0]='L';
            fprintf(fptr,"\tjmp %s\n",tname);
            fprintf(fptr,"\t%s:\n",temp);
            fprintf(fptr,"\tmovl $0,%%eax\n");
            fprintf(fptr,"\t%s:\n",tname);
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"!"))
        {
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op1);
            fprintf(fptr,"\ttestl %%eax,%%eax\n");
            fprintf(fptr,"\tsete %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"LABEL"))
        {
            fprintf(fptr,"%s:\n",quad[i].result);
        }
        else if(!strcmp(quad[i].operator,"GOTO"))
        {
            fprintf(fptr,"jmp %s\n",quad[i].result);
        }
        else if(!strcmp(quad[i].operator,"IF"))
        {
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op1);
            fprintf(fptr,"\ttestl %%eax,%%eax\n");
            fprintf(fptr,"\tje %s\n",quad[i].result);
        }
        else if(!strcmp(quad[i].operator,"ARR_RT"))
        {
            fprintf(fptr,"\tmovl	%s, %%eax\n",quad[i].op2);
            fprintf(fptr,"\tmovl	%s(,%%eax,), %%eax\n",quad[i].op1);
            fprintf(fptr,"\tmovl	%%eax,%s\n",quad[i].result);
        }
        else if(!strcmp(quad[i].operator,"NULL"))
        {

            l=strlen(quad[i].result);
            f=0;
            for(j=0;j<l;j++)
            {
                s1[j]=quad[i].result[j];
                if(quad[i].result[j]=='[')
                {
                    s1[j]='\0';
                    k=0;
                    j++;
                    while(quad[i].result[j]!=']')
                    {
                        s2[k]=quad[i].result[j];
                        k++;j++;
                    }
                    s2[k]='\0';
                    f=1;
                    break;
                }
            }

            if(f==1)
            {
                fprintf(fptr,"\tmovl	%s, %%eax\n",s2);
                fprintf(fptr,"\tmovl	%s, %%edx\n",quad[i].op1);
                fprintf(fptr,"\tmovl	%%edx, %s(,%%eax,)\n",s1);
            }
            else
            {
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op1);
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            }
        }





    }
        fprintf(fptr,"\n\n\tmovl	result, %%eax\n");
        fprintf(fptr,"\tmovl	%%eax, 4(%%esp)\n");
        fprintf(fptr,"\tmovl	$printtext1, %%eax\n");
        fprintf(fptr,"\tmovl	%%eax, (%%esp)\n");
        fprintf(fptr,"\tcall	_printf\n\n");

        fprintf(fptr,"\tmovl	size, %%eax\n");
        fprintf(fptr,"\tmovl	%%eax, 4(%%esp)\n");
        fprintf(fptr,"\tmovl	$printtext2, %%eax\n");
        fprintf(fptr,"\tmovl	%%eax, (%%esp)\n");
        fprintf(fptr,"\tcall	_printf\n\n");

        fprintf(fptr,"\tmovl	$printtext3, %%eax\n");
        fprintf(fptr,"\tmovl	%%eax, (%%esp)\n");
        fprintf(fptr,"\tmovl	$0, %%ecx\n");
        fprintf(fptr,"print_a:\n");
        fprintf(fptr,"\tcmpl	%%ecx, size\n");
        fprintf(fptr,"\tjz 	exit\n");
        fprintf(fptr,"\tmovl	a(,%%ecx,4), %%eax\n");
        fprintf(fptr,"\tmovl	%%eax, 4(%%esp)\n");
        fprintf(fptr,"\tmovl	%%ecx, temp_count\n");
        fprintf(fptr,"\tcall	_printf\n");
        fprintf(fptr,"\tmovl	temp_count, %%ecx\n");
        fprintf(fptr,"\taddl	$1, %%ecx\n");
        fprintf(fptr,"\tjmp 	print_a\n");
        fprintf(fptr,"exit:\n\n\n");






        fprintf(fptr,"\tmovl %%ebp, %%esp\n");
        fprintf(fptr,"\tpopl %%ebp\n");
        fprintf(fptr,"\tret\n");



        fprintf(fptr,".data\n");
        fprintf(fptr,"\tprinttext1: .ascii \"result = %%d\\n\\0\"\n ");
        fprintf(fptr,"\tprinttext2: .ascii \"size = %%d\\n\\0\"\n ");
        fprintf(fptr,"\tprinttext3: .ascii \"%%d, \\0\"\n ");
        fprintf(fptr,"\ttemp_count: .long 0\n");

        printf("idx=%d\n",idx);
        for(i=0;i<id;i++)
        {
            if(strcmp(table[i].name,"main"))
            fprintf(fptr,"\t%s: .long %s\n",table[i].name,table[i].initial);
        }
        for(i=0;i<temp_cnt;i++)
        {
            fprintf(fptr,"\t%s: .long 0\n",temp_var[i]);
        }
}
void int_to_str(int num)
{
    int i=0,j=0;
    char s[50];
     while(num>0)
    {
        s[i++]=(num%10)+48;
        num=num/10;
    }
    i--;
    while(i>=0)
    {
        num_string[j]=s[i];
        j++;i--;
    }
}
void check_arr(char ch_ar1[],char ch_ar2[])
{
    int l,j,k,ar;
    char s1[50],s2[50];
    l=strlen(ch_ar1);
    ar=0;
    for(j=0;j<l;j++)
    {
        s1[j]=ch_ar1[j];
        if(ch_ar1[j]=='[')
        {
            s1[j]='\0';
            k=0;
            j++;
            while(ch_ar1[j]!=']')
            {
                s2[k]=ch_ar1[j];
                k++;j++;
            }
            s2[k]='\0';
            ar=1;
            break;
        }
    }
     if(ar==1)
     {
        generate();
        fprintf(fp,"%s = %s[%s]\n",tname,s1,s2);
        strcpy(quad[idx].result,tname);
        strcpy(quad[idx].op1,s1);
        strcpy(quad[idx].op2,s2);
        strcpy(quad[idx].operator,"ARR_RT");
        idx++;
        strcpy(s3,tname);
     }

     l=strlen(ch_ar2);
    ar=0;
    for(j=0;j<l;j++)
    {
        s1[j]=ch_ar2[j];
        if(ch_ar2[j]=='[')
        {
            s1[j]='\0';
            k=0;
            j++;
            while(ch_ar2[j]!=']')
            {
                s2[k]=ch_ar2[j];
                k++;j++;
            }
            s2[k]='\0';
            ar=1;
            break;
        }
    }
     if(ar==1)
     {
        generate();
        fprintf(fp,"%s = %s[%s]\n",tname,s1,s2);
        strcpy(quad[idx].result,tname);
        strcpy(quad[idx].op1,s1);
        strcpy(quad[idx].op2,s2);
        strcpy(quad[idx].operator,"ARR_RT");
        idx++;
        strcpy(s4,tname);
     }

}
