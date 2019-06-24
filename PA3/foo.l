%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
//enum tnumber {IDENTIFIER, CHARACTER, STRING, INTEGER, REAL, COMMENT, OPERATOR, PUNCTUATION, BREAKE, CASE, CHAR, DEFAULT, ELSE, FLOAT, FOR, IF, INT, RETURN, STRUCT, SWITCH, VOID, WHILE};
int ival = 0;
float rval = 0.0f;
//char cval = NULL;
int octToDecimal(char* token);
int hexToDecimal(char* token);
int charToDecimal(char* token);
%}

NL		\n
WS		[ \t]+
LETTER		[a-zA-Z_]
NONZERO		[1-9]
DIGIT		[0-9]
INTEGER		0|{NONZERO}{DIGIT}*
OCTAL		0[0-7]+
HEXA		0(x|X)[0-9A-Fa-f]+
FLOAT		{DIGIT}+\.{DIGIT}+|{DIGIT}+\.{DIGIT}+(E|e)(\+|\-)?{DIGIT}+
ID		{LETTER}({LETTER}|{DIGIT})*
CHARACTER	\'({LETTER}|{DIGIT}|\\[\'\"\?\\abfnrtv0]|[!#%\^&\*\(_\)\-\+=~\[\]\|;:\{\},\.<>\/])\'
STRING		\"([^\\'"]|\\[abfnrtv0\'\"\?\\])*\"
OPERATOR	[\+\-\*\/%!=<>]|[=!<>]=|<<|>>|&&|\|\||\+\+|\-\-|\,|=|\+=|\-=|\*=|\/=|%=
PUNCTUATION	[\(\)\{\}\[\]\.:;]
COMMENT		\/\/(.)*|\/\*([^\*]|\*+[^\*\/])*\*+\/

%%
{NL}		{}
{WS}		{}
"int"		{return INT;}
"void"		{return VOID;}
"char"		{return CHAR;}
"float"		{return FLOAT;}
"if"            {return IF;}
"else"          {return ELSE;}
"switch"        {return SWITCH;}
"case"          {return CASE;}
"break"		{return BREAK;}
"default"	{return DEFAULT;}
"return"        {return RETURN;}
"for"		{return FOR;}
"while"		{return WHILE;}
"struct"        {return STRUCT;}
":"		{return NSC;}
";"             {return SC;}
","             {return S;}
"."		{return DOT;}
"("		{return LS;}
")"		{return RS;}
"{"             {return LB;}
"}"             {return RB;}
"["		{return LL;}
"]"		{return RL;}
"||"		{return OR;}
"&&"		{return AND;}
"++"		{return PLUPLU;}
"--"		{return MINMIN;}
"-="		{return MINAIG;}
"/="		{return DIVAIG;}
"+="		{return PLUAIG;}
"*="		{return MLUAIG;}
"%="		{return MODAIG;}
"="             {return ASIGN;}
"=="		{return EQUAL;}
"!="		{return NEQUAL;}
"<"		{return LESS;}
">"		{return GREATER;}
"<="		{return LESSEQUAL;}
">="		{return GREATEREQUAL;}
"*"		{return MUL;}
"/"		{return DIV;}
"%"		{return MOD;}
"+"		{return PLUSE;}
"-"		{return MINUS;}
{INTEGER}       {yylval.iVal = atoi(yytext);    return INTEGER;}
{OCTAL}         {yylval.iVal = octToDecimal(yytext);    return INTEGER;}
{HEXA}          {yylval.iVal = hexToDecimal(yytext);    return INTEGER;}
{FLOAT}		{yylval.rVal = atof(yytext); return REAL;}
{CHARACTER}     {yylval.cVal = charToDecimal(yytext);   return INTEGER;}
{ID}		{int i=0; 
		yylval.sVal = (char*)malloc(yyleng+1); 
		for(i=0; i<yyleng; i++)	yylval.sVal[i] = yytext[i];
		yylval.sVal[yyleng] = '\0';
		return ID;}
{STRING}	{int i=0; 
                yylval.sVal = (char*)malloc(yyleng+1);
                for(i=0; i<yyleng; i++) yylval.sVal[i] = yytext[i];
                yylval.sVal[yyleng] = '\0';
                return STRING;}

%%
int charToDecimal(char* token){
	if(*(token+1) == '\\'){
		switch(*(token+2)){
		case 'a':	return (int)'\a';
		case 'b':	return (int)'\b';
		case 'f':	return (int)'\f';
		case 'n':	return (int)'\n';
		case 'r':	return (int)'\r';
		case 't':	return (int)'\t';
		case 'v':	return (int)'\v';
		case '0':	return (int)'\0';
		default:	return (int)*(token+2);
		}
	}
	else			return (int)*(token+1); 
}

int octToDecimal(char* token){
	int d = 0, i = 0;
	for(i=0;*(token+i) != '\0';i++){
		d <<= 3;
		d += (int)(*(token+i) - '0');
	}
	return d;
}

int hexToDecimal(char* token){
	int d = 0, i = 0;
	for(i=2;*(token+i) != '\0';i++){
		d <<= 4;
		if(*(token+i) >= '0' && *(token+i) <= '9')	d += (int)(*(token+i) - '0');
		else if(*(token+i) >= 'A' && *(token+i) <= 'F')	d += (int)(*(token+i) - 'A' + 10);
		else	d += (int)(*(token+i) - 'a' + 10);
	}
	return d;
}
