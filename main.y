%{
	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include <math.h>

	extern FILE *yyin;
	extern FILE *yyout;
	int yyparse();
	int yylex();
	int yyerror();

    int vptr = 0;
    int val[1000];
    char variables[1000][1000];
	void lcm(int a,int b)
	{
		int c=fmax(a,b);
		while(1)
		{
			if(c%a==0 && c%b==0)
			{
				printf("LCM of %d & %d is %d\n",a,b,c);
				break;
			}
			c++;
		}
	}
	void gcd(int a,int b)
	{
		int gcd;
		for(int i=1; i <= a && i <= b; ++i)
		{
			if(a%i==0 && b%i==0)
				gcd = i;
		}
    	printf("GCD of %d & %d is %d\n", a, b, gcd);
	}
	void swap(int *x,int *y)
	{
		int temp = *x;
		*x = *y;
		*y = temp;
	}
    int ifExists(char str[]){//check if a variable already exists
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) return 1;
        }
        return 0;
    }
    
    int addval(char str[],int newval){// if a variable is not already exist add new value
        if(ifExists(str) == 1) return 0;
        strcpy(variables[vptr],str);
        val[vptr] = newval;
        vptr++;
        return 1;
    }

    int getval(char str[]){//for getting value
        int idx = -1;
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) {
                idx = i;
                break;
            }
        }
        return val[idx];
    }
    int setval(char str[], int newval){
    	int idx = -1;
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) {
                idx = i;
                break;
            }
        }
        val[idx] = newval;

    }
	int swdone = 0;
	double swvar;

	int ifvar[1000];
	int ifptr = -1;
	int ifdone[1000];

%}


%union{
	int i;
	double d;
	char s[1000];
}


%type <d> expr
%token <s> Id
%token <i> Num
%token <s> Str

%token Main Eol Start End Nl
%token Int Float Char
%token Cin Cout
%token Not And Xor Or Fact Sin Cos Tan Sqrt Log Ln Pow
%token If Elif Else Switch Default Case Eq
%token Fors Fore Movby Do Until
%token Pplus Mminus Lt Lte Gt Gte Ckeq Noteq Plus Minus Mul Div Mod
%token Max Min Comment
%token Gcd Lcm Append Swap


%nonassoc Elif 
%nonassoc Else
%left Default
%left Case



%left Eq Ckeq Noteq Less Lesseq Gre Greeq
%left Plus Minus 
%left Mul Div 
%left Pow Mod
%left Pplus Mminus
%left And Or Xor Not
%left Log Ln Sqrt 
%right Fact
%left Sin Cos Tan


%%

	code  :  		Main Start statement End { printf("Compilation Successful!!!\n"); }
					;
	statement: 		
					|statement declaration Eol {}
					|statement assignment Eol {}
					|statement input Eol {}
					|statement output Eol {}
				    |statement ifstatement {}
					|statement loop {}
				   	|statement function Eol {}
				    |statement switchstmnt {}
					|statement expr Eol {}
					;
	//declartion
	declaration : 	type var {}
					;
	type		: 	Int | Float | Char {}
					;
	var			: 	vars ',' var {}
					|vars {}
					;
	vars   		: 	Id	
					{
						int a = addval($1,0);
						if(!a) {
							printf("%s is already exist\n",$1);
							exit(-1);
						}

					}
					|Id Eq expr 	
					{
						int a = addval($1,$3);
						if(!a) {
							printf(" %s is already exist\n",$1);
							exit(-1);
							}
					}

					;

	//assignment
	assignment : Id Eq expr
					{
						if(!ifExists($1)) {
							printf("%s is not declared\n",$1);
							exit(-1);
						}
						else{
							setval($1,$3);
						}
				    }
					;
	//for printing value
	output :	Cout '(' Id ')'
				{
					if(!ifExists($3)){
							printf("%s is not declared\n",$3);
							exit(-1);
						}
						else{
							int a = getval($3);
							printf("%d",a);
						}
				}
				|Cout '(' expr ')'
				{
					printf("%lf",$3);
				}
				|Cout '(' Str ')'
				{
					int len = strlen($3);
						int i;
						for(i = 1;  i < len-1; i++) printf("%c",$3[i]);
				}
				|Cout '(' Nl ')'
				{
					printf("\n");
				}
				;
	//for taking input
	input:		Cin '(' Id ')'
				{
					int a;
					scanf("%d",&a);
					setval($3,a);
					
				}
	//for different expressions
	expr : Num {$$ = $1;}
				| Id	
					{
						if(!ifExists($1)) {
							printf("%s is not declared\n",$1);
							exit(-1);
						}
						else{
							$$ = getval($1);
						}
				 	}
				| Minus expr
						{$$ = - $2;}
				| expr Plus expr 
						{$$ = $1 + $3;}
				| expr Minus expr
						{$$ = $1 - $3;}
				| expr Mul expr 
						{$$ = $1 * $3;}
				| expr Div expr 
						{
							if($3) {
								$$ = $1 / $3;
								}
							else {
								$$ = 0;
								printf("\nRuntime Error: division by zero is not allowed!!!\n");
								exit(-1);
							} 
						}
				| expr Mod expr 
						{
							if($3) {
								$$ = (int)$1 % (int)$3;
								}
							else {
								$$ = 0;
								printf("\nRuntime Error: division by zero is not allowed!!!\n");
								exit(-1);
							} 
						}
				| expr Pow expr 
						{$$ = pow($1,$3);}
				| expr Lt expr	
						{ $$ = $1 < $3; }
				| expr Gt expr	
						{ $$ = $1 > $3; }
				| expr Lte expr	
						{ $$ = $1 <= $3; }
				| expr Gte expr	
						{ $$ = $1 >= $3; }
				| expr Ckeq expr
						{ $$ = $1 == $3; }
				| expr Noteq expr
				 		{ $$ = $1 != $3; }
				| expr And expr      
						{$$ = ($1 && $3);}       
				| expr Or expr       
						{$$ = ($1 || $3);}         
				| expr Xor expr     
						{$$ = ((int)$1 ^ (int)$3);}          	
				| Not expr          
						{$$ = !$2;}               	
				| '(' expr ')'      
						{$$ = $2}       
				| Sin '(' expr ')'  
						{$$ = sin($3);}    
				| Cos '(' expr ')'  
						{$$ = cos($3);}     
				| Tan '(' expr ')'  
						{$$ = tan($3);}      
				| Log '(' expr ')'  
						{$$ = log10($3);}      
				| Ln '(' expr ')'   
						{$$ = log($3);}       
				| Sqrt '(' expr ')' 
						{$$ = sqrt($3);}  
				| Max '(' expr ',' expr ')'
						{if($3 <= $5) { 
							$$ = $5;
						}
						else {
							$$ = $3;
							}
						}
				| Min '(' expr ',' expr ')'
						{
							if($3 >= $5) { 
							$$ = $5;
						}
						else {
							$$ = $3;
							}
						}
				| expr Pplus
						{
							$$ = $1 + 1;
						}
				| expr Mminus
						{
							$$ = $1 - 1;
						}
				| expr Fact
						{
							long long x = 1;
							for(long long i=1;i<=$1;i++) x*=i;
							$$ = x;
						}
				; 
	//For conditional statement
	ifstatement: If '(' ifexpr ')' '{' statement '}' elseif
						{
							ifdone[ifptr] = 0;
							ifptr--;
						}
				;
	ifexpr:   	expr 
						{
							ifptr++;
							ifdone[ifptr] = 0;
							if($1){
								printf("\nIf block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nIf block:False\n");
							}
						}
				;
	elseif 	: 
				| elseif Elif '(' expr ')' '{' statement '}'
						{
							if($4 && ifdone[ifptr] == 0){
								printf("\nElse if block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nElse if block:False\n");
							}
						}
				| elseif Else '{' statement '}'
						{
							if(ifdone[ifptr] == 0){
								printf("\nElse block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nElse block:False\n");
							}
						}

				;
	loop :		Fors '<' expr '>' Fore '<' expr '>' Movby '<' expr '>' '{' statement '}'	
					{
						int srt = $3;
						int end = $7;
						int diff = $11;
						int cnt = 0;
						int i = 0;
						for(i = srt; i <= end; i += diff){
							cnt++;
							printf("Step no : %d\n",i);
						}	
						printf("\nLoop has turned around %d times\n",cnt);
					}
				|Until '<' expr '>' Do '{' statement '}'
					{
						int i=0;
						int cnt = 0;
						for(i=$3;i>0;i--)
						{
							cnt++;
							printf("Step no :%d\n",i);
						}
						printf("\nLoop has turned around %d times\n",cnt);
					}
				;
	//For built in functions
	function:	expr Append Lcm '(' expr ')' 
					{
						lcm($1,$5);
					}
				|expr Append Gcd '(' expr ')'
					{
						gcd($1,$5);
					}
				|expr Append Swap '(' expr ')'
					{
						int a=(int)$1;
						int b=(int)$5;
						swap(&a,&b);
						$1=a;
						$5=b;
					}
				;
	//For Switch Statements
	switchstmnt	: Switch '(' exprswch ')' '{' cases '}' 
				;

	exprswch 	:  expr
					{
						swdone = 0;
						swvar = $1;
					}
			;


	cases	: 	/* empty */
				|Default ':' '{' statement '}' cases
					{
						if(swdone == 0){
							swdone = 1;
							printf("Default Case is True\n");
						}
						else
						{
							printf("Default Case is False\n");
						}
					}
				|Case expr ':' '{' statement '}' cases
				{
					if($2 == swvar){
						printf("Case :%d is True\n",(int)$2);
						swdone = 1;
					}
					else
					{
						printf("Case :%d is False\n",(int)$2);
					}					
				}
				;
		

%%
int main(int argc, char **argv)
{
//yydebug= 1;
	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
	//yyin = fopen (argv[1],"r");
    printf("\n\n     -------Starting Program Execution-------\n\n\n");
	yyparse();
	return 0;
} 