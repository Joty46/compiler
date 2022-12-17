%{
#include <stdio.h>
#include "main.tab.h"
#include <string.h>
#include <math.h>
extern FILE *yyin;
extern FILE *yyout;

%}

%%
"mul"			{return Main;}
";"				{return Eol;}
"purno"			{return Int;}
"doshomik"		{return Float;}
"okkhor"		{return Char;}
"jodi"			{return If;}
"jono"			{return Elif;}
"noyto"			{return Else;}
"forst"			{return Fors;}
"foren"			{return Fore;}
"step"			{return Movby;}
"do"			{return Do;}
"until"			{return Until;}
"change"		{return Switch;}
"none"			{return Default;}
"in"			{return Cin;}
"out"			{return Cout;}
":="			{return Eq;}
"pp"			{return Pplus;}
"mm"			{return Mminus;}
"lt"			{return Lt;}
"lte"			{return Lte;}
"gt"			{return Gt;}
"gte"			{return Gte;}
":=="			{return Ckeq;}
"!:="			{return Noteq;}
"not"			{return Not;}
"and"			{return And;}
"or"			{return Or;}
"xor"			{return Xor;}
"case"			{return Case;}
"fact"			{return Fact;}
"sin" 			{return Sin;}
"cos" 			{return Cos;}
"tan" 			{return Tan;}
"sqr" 			{return Sqrt;}
"log" 			{return Log;}
"ln"  			{return Ln;} 
"jog"			{return Plus;}
"biyog"			{return Minus;}
"gun"			{return Mul;}
"vag"			{return Div;}
"mod"			{return Mod;}
"pow"			{return Pow;}
"max"			{return Max;}
"min"			{return Min;}
"<<"			{return Start;}
">>"			{return End;}
"**"[^*]+"**"	{printf("\n%s\n",yytext);}
"/"				{return Nl;}
"init" 				{}
"call"					{}
[-]?[0-9]+[.]?[0-9]*	{yylval.i = atoi(yytext);
						return Num; }
[a-zA-z0-9]+	{ strcpy(yylval.s,yytext);return Id;}
"()" 						{}

"\""(.)*"\"" {strcpy(yylval.s,yytext);return Str;}
[,.:<>(){}\]\[]	 {return yytext[0];}
[ \t\n]					{}
.										{printf("don't know\n", yytext);}

%%
int yywrap()
{
	return 1;
}

int yyerror(char *s){
	fprintf(stderr,"error: %s\n", s);
}
