%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
enum tnumber {TEOF, TKEYWORD, TIDENTIFIER, TCHARACTER, TSTRING, TINTEGER, TREAL, TCOMMENT, TOPERATOR, TPUNCTUATION, TLINE};
char *tokenType[] = {"Keyword", "Identifier", "Character constant", "String constant", "Integer constant", "Real constant", "Comment", "Operator", "Punctuation symbol"};

// You can declare additional global variables or functions here if you need.
int line = 0;
int word = 0;
int position =0;
int Hex_to_decimal(char hexVal[]);
int Oct_to_decimal(char octVal[]);
int CheckASCII(char text[]);
%}
WS              [ \t]
LINE		\n
KEYWORD		break|case|char|default|else|float|for|if|int|return|struct|switch|void|while
DIGIT		[0-9]
LETTER_		[A-Za-z_]
IDENTIFIER	{LETTER_}({LETTER_}|{DIGIT})*
CHARACTER	'\\(a|b|f|n|r|t|v|0|\\|'|\"|\?)'|('[^'\"]')
STRING		\"([^\\'"]|\\[abfnrtv0\'\"\?\\])*\"
INTEGER		[1-9]{DIGIT}*|0|0[0-7]+|0(x|X)[0-9A-Fa-f]+
REAL		{DIGIT}+\.{DIGIT}+|{DIGIT}+\.{DIGIT}+(e|E)(\+|\-){DIGIT}+|{DIGIT}+
COMMENT		\/\*([^\*]|\*+[^\*\/])*\*+\/|\/\/[^\n]*\n
OPERATOR	,|\+|\-|\*|\/|%|!|=|\<|\>|\+=|\-=|\*=|\/=|%=|==|\!=|\<=|\>=|\<\<|\>\>|&&|\|\||\+\+|\-\-
PUNCTUATION	[\(\)\{\}\[\];:\.]
%%
{WS}		{position++;}
{LINE}		{return (TLINE); }
{KEYWORD}	{return (TKEYWORD);}
{IDENTIFIER}	{return (TIDENTIFIER);}
{CHARACTER}	{return (TCHARACTER);}
{STRING}	{return (TSTRING);}
{INTEGER}	{return (TINTEGER);}
{REAL}		{return (TREAL);}
{COMMENT}	{return (TCOMMENT);}
{OPERATOR}	{return (TOPERATOR);}
{PUNCTUATION}	{return (TPUNCTUATION);}
%%
int main(int argc, char *argv[]){
	enum tnumber tn;
        char * text;
	
	if(argc == 1) exit(0);

	yyin = fopen(argv[1], "r");

	while((tn = yylex()) != TEOF){
		switch(tn){
		case TLINE:
			line++;
			break;
		case TKEYWORD:
			printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[0], 0, line ,position);
			position+=yyleng;
			break;
		case TIDENTIFIER:
                        printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[1], 0, line ,position);
			position+=yyleng;
                	break;
		case TCHARACTER:
			;
			char * character = yytext;
			int asciiN=0;
			if(character[1]=='\\'){
				asciiN=CheckASCII(character);
	                        printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[2], asciiN, line ,position);
			}else
                        	printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[2], character[1], line ,position);
                	position+=yyleng;
			break;
		case TSTRING:
                        printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[3], 0, line ,position);
			position+=yyleng;
                	break;
		case TINTEGER:
			;
			char * num=yytext;
			int returnN=0;
			if(num[0]=='0'){
				if(num[1]=='x'||num[1]=='X'){			
        	                        returnN= Hex_to_decimal(num);
				}else{
					returnN = Oct_to_decimal(num);
				}
			printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[4], returnN, line ,position);
			}else
				printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[4], atoi(yytext), line ,position);
			position+=yyleng;
                	break;
		case TREAL:
                        printf("%-15s -> %18s, %10.2f, %5d, %5d\n", yytext, tokenType[5], atof(yytext), line ,position);
			position+=yyleng;
                        break;
		case TCOMMENT:
			;
			int i=0;
			char* temp;
			text=yytext;
                        if(text[1]=='*'){
				for(i=0; text[i] != '\0'; i++){
         			       if(text[i]=='\n'){
			                        //printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[6], 0, line ,position);
						line++;
					}
        			}
	                printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[6], 0, line ,position);
                        position=0;

			} else if(text[1]=='/'){
				text=strchr(text, '\n');
	                        *text = '\0';
				//line++;
				printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[6], 0, line ,position);
                        	position=0;
        	                line++;      
	 			*text = '\n';
				//position+=yyleng;
			}
                        break;
		case TOPERATOR:
                        printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[7], 0, line ,position);
			position+=yyleng;
                        break;
		case TPUNCTUATION:
                        printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[8], 0, line ,position);
			position+=yyleng;
                        break;
		}
	}
	return 0;
}

// Define functions here if you declare the additional functions at the top.
int CheckASCII(char text[])
{
	int num=0;
	if(text[2]=='\''){
		num=39;
	}
	else if(text[2]=='\"'){
                num=34;
        }
        else if(text[2]=='\?'){
                num=63;
        }
        else if(text[2]=='\\'){
                num=92;
        }
        else if(text[2]=='a'){
                num=7;
        }
        else if(text[2]=='b'){
                num=8;
        }
        else if(text[2]=='f'){
                num=12;
        }
        else if(text[2]=='n'){
                num=10;
        }
        else if(text[2]=='r'){
                num=13;
        }
        else if(text[2]=='t'){
                num=9;
        }
        else if(text[2]=='v'){
                num=11;
        }
        else if(text[2]=='0'){
                num=0;
        }
	return num;
}
int Hex_to_decimal(char hexVal[])
{
    int len = strlen(hexVal); 
    int base = 1; 
    int dec_val = 0;
    int i=len-1;
      
    for (i; i>=0; i--) 
    {    
        if (hexVal[i]>='0' && hexVal[i]<='9') 
        { 
            dec_val += (hexVal[i] - 48)*base; 
                  
            base = base * 16; 
        } 
  
        else if (hexVal[i]>='A' && hexVal[i]<='F') 
        { 
            dec_val += (hexVal[i] - 55)*base; 
            base = base*16; 
        } 
        else if(hexVal[i]>='a' && hexVal[i]<='f')
        {
             dec_val += (hexVal[i] - 87)*base;
            base = base*16; 
         }
    } 
      
    return dec_val; 
}


int Oct_to_decimal(char octVal[])
{
    int len = strlen(octVal);   
    int base = 1; 
    int oct_val = 0;
    int i=len-1;
      
    for (i; i>=0; i--) 
    {    
        if (octVal[i]>='0' && octVal[i]<='7') 
        { 
            oct_val += (octVal[i] - 48)*base; 
                  
            // incrementing base by power 
            base = base * 8; 
        } 
    } 
      
    return oct_val; 
}
