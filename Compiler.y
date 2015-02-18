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

%token DOT COLON EQUALS SEMI_COLON HASH DOUBLE_QUOTES SINGLE_QUOTES OPEN_PARANTHESES CLOSE_PARANTHESES
%token OPEN_BRACES CLOSE_BRACES COMMA OPEN_SQ_BRACKET CLOSE_SQ_BRACKET THREE_DOT

%token INCREMENT DECREMENT ADD SUBTRACT MULTIPLY DIVIDE MOD
%token NOT AND OR LESS_THAN LESS_THAN_EQUAL GREATER_THAN GREATER_THAN_EQUAL
%token IS_EQUAL_TO NOT_EQUAL_TO BITWISE_AND BITWISE_OR NEGATION XOR R_SHIFT L_SHIFT

%token SHORTHAND_ADD SHORTHAND_SUB SHORTHAND_MUL SHORTHAND_DIV SHORTHAND_MOD SHORTHAND_AND
%token SHORTHAND_XOR SHORTHAND_OR SHORTHAND_LSHIFT SHORTHAND_RSHIFT TERNARY LINK

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM
%token EXTERN FLOAT FOR GOTO IF INT LONG REGISTER RETURN SHORT SIGNED SIZEOF STATIC
%token STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE

%token IDENTIFIER NUMBER REAL_NUMBER EXP_NUMBER CHAR_CONSTANT STRING_CONSTANT

%%

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