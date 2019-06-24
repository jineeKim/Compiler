%{
#include "util.h"
#include <stdio.h>
#include <stdlib.h>
int yylex(void);
int yyerror(char*);
%}

%union{
	int iVal;
	float rVal;
	char cVal;
	char *sVal;
}
%token <iVal> INTEGER
%token <rVal> REAL
%token INT VOID CHAR FLOAT
%token <sVal> STRING
%token IF ELSE
%token SWITCH CASE DEFAULT BREAK RETURN
%token <sVal> ID 
%token STRUCT
%token FOR WHILE
%token NSC
%token SC
%token S
%token DOT
%token LS RS
%token LB RB
%token LL RL
%token OR
%token AND
%token PLUPLU
%token MINMIN
%token MINAIG
%token DIVAIG
%token PLUAIG
%token MLUAIG
%token MODAIG
%token ASIGN
%token EQUAL
%token NEQUAL
%token LESS
%token GREATER
%token LESSEQUAL
%token GREATEREQUAL
%token MUL
%token DIV
%token MOD
%token PLUSE
%token MINUS
%%
Program : DeclarationList {
		NODE *declList = pop(); 
		NODE *prog = nodeS("Program", nonterminal, _PROG); 
		mkSubtree(prog, declList); 
		push(prog);
		 }
	;
DeclarationList : DeclarationList Declaration {
			NODE *dec = pop(); 
			NODE *decList = pop(); 
			NODE *temp;
        	        temp = decList;
	                // Traverse to the last node
                	while(temp->sibling != NULL)
        	            temp = temp->sibling;
	                mkSibling(temp, dec);
			push(decList);
			}
		| Declaration 
;
Declaration : VarDeclaration
	    | FuncDeclaration 	    
	    | StructDeclaration 
;
VarDeclaration : TypeSpecifier IDs SC {
		NODE *ids = pop(); 
		NODE *type = pop(); 
	       	NODE *varDecl = nodeS("VarDeclaration", nonterminal, _VARDEC); 
		mkSubtree(varDecl, type); 
		mkSibling(type, ids); 
		push(varDecl);
		} 
	       ;
IDs : IDs S Value {
	NODE *val = pop(); 
	NODE *ids = pop();
	NODE *temp;
	temp = ids;
        // Traverse to the last node
        while(temp->sibling != NULL)
        	temp = temp->sibling;
        mkSibling(temp, val);
        push(ids);
	}
    | Value 
;
Value : Value LL INTEGER RL {
	NODE *node = pop(); 
    	NODE *intNode = nodeI($3, terminal); 
	if(node->child == NULL){
		NODE *id_arr = nodeS("IdArray", nonterminal, _ID_ARR); 
		mkSubtree(id_arr, node); 
		mkSibling(node, intNode); 
		push(id_arr);
	} else if(node->child != NULL){
		NODE* temp; 
		temp = node->child; 
		while(temp->sibling != NULL)  
			temp = temp->sibling; 
		mkSibling(temp, intNode); 
		push(node);}
	}
      | ID {NODE *id = nodeS($1, terminal, _ID); push(id);} 
;
FuncDeclaration : TypeSpecifier ID LS Params RS CompoundStatement {
		NODE *cpdStmt = pop(); 
		NODE *params = pop(); 
		NODE *id = nodeS($2, terminal, _ID); 
		NODE *type=pop(); 
		NODE *funDec = nodeS("FuncDeclaration", nonterminal, _FUNDEC); 
                mkSubtree(funDec, type);
               	mkSibling(type, id);
               	mkSibling(id, params);
               	mkSibling(params, cpdStmt);
		push(funDec);
		} 
		| TypeSpecifier ID LS Params RS SC {
			NODE *params = pop(); 
			NODE *id = nodeS($2, terminal, _ID); 
			NODE *type=pop(); 
			NODE *funDec = nodeS("FuncDeclaration", nonterminal, _FUNDEC); 
			mkSubtree(funDec, type);
                        mkSibling(type, id);
                        mkSibling(id, params);
			push(funDec);
			} 
;
StructDeclaration : StructTypeDeclaration SC {
		  	NODE *strDec = nodeS("StructDeclaration", nonterminal, _STRDEC); 
			NODE *strType = pop(); 
			mkSubtree(strDec, strType); 
			push(strDec);
			}
		  ;
StructTypeDeclaration : STRUCT ID LB LocalDeclarationList RB  {
			NODE *ldecList = pop();
		     	NODE *id  = nodeS($2, terminal, _ID); 
			NODE *strType = nodeS("StructType", nonterminal, _STRTYPE); 
			mkSubtree(strType, id);
                        mkSibling(id,ldecList);
			push(strType);
			}
		     ;
Params : ParamList {
	NODE *paramList = pop(); 
       	NODE *params = nodeS("Params", nonterminal, _PARAM); 
	mkSubtree(params, paramList); 
	push(params);
	}
       | VOID {
	NODE *voidNode = nodeS("void", terminal, _TYPE); 
	NODE *params = nodeS("Params", nonterminal, _PARAM); 
	mkSubtree(params, voidNode); 
	push(params);
	}
       |  {
		NODE *params = nodeS("Params", nonterminal, _PARAM); 
		push(params);
		}
;
ParamList : ParamList S Param  {
	  	NODE *param = pop();
		NODE *paramList = pop();  
		NODE *temp;
	        temp = paramList;
        	// Traverse to the last node
	        while(temp->sibling != NULL)
        	        temp = temp->sibling;
                mkSibling(temp, param);
                push(paramList);
		}
	  | Param 
;
Param : TypeSpecifier Value  {
	NODE *val = pop(); 
	NODE *type = pop(); 
      	NODE *param = nodeS("Param", nonterminal, _PARAM); 
	mkSubtree(param, type); 
	mkSibling(type, val); 
	push(param);
	}
      ;
TypeSpecifier : INT {NODE *intNode = nodeS("int", terminal, _TYPE); push(intNode);}
	      | VOID {NODE *voidNode = nodeS("void", terminal, _TYPE); push(voidNode);}
	      | CHAR {NODE *charNode = nodeS("char", terminal, _TYPE); push(charNode);}
	      | FLOAT {NODE *floatNode = nodeS("float", terminal, _TYPE); push(floatNode);}
	      | StructType
;
StructType : StructTypeDeclaration
	   | StructTypeReference
;
StructTypeReference : STRUCT ID {
			NODE *strType = nodeS("StructType", nonterminal, _STRTYPE); 
			NODE *id = nodeS($2, terminal, _ID); 
			mkSubtree(strType, id); 
			push(strType); 
			}
		   ; 
CompoundStatement : LB LocalDeclarationList StatementList RB {
			NODE *stmtList = pop(); 
		  	NODE *ldecList = pop(); 
			NODE *cpdStmt = nodeS("CompoundStatement", nonterminal, _CPDSTMT); 			
			mkSubtree(cpdStmt, ldecList);
                        mkSibling(ldecList, stmtList);
			push(cpdStmt);
			}
		  ;
LocalDeclarationList : LocalDeclarationList VarDeclaration  {
			NODE *var = pop(); 
			NODE *ldecList = pop();
			if(ldecList->child != NULL){
				NODE* temp; temp = ldecList->child; 
	                        while(temp->sibling != NULL)
        	                        temp = temp->sibling;
                	        mkSibling(temp, var);
			}else{
                        	mkSubtree(ldecList, var);
			} 
			push(ldecList);
			}
		     | 	{
			NODE *ldecList = nodeS("LocalDeclarationList", nonterminal, _LDECLIST); 
			push(ldecList);
			}
;
StatementList : StatementList Statement {
		NODE *stmt = pop();
		NODE *stmtList = pop();
		if(stmtList->child != NULL){
			NODE* temp; temp = stmtList->child;
	                while(temp->sibling != NULL)
        	                temp = temp->sibling;
                	mkSibling(temp, stmt);
		}else{
			mkSubtree(stmtList, stmt);
		}
		push(stmtList);
		}
	      |  {
		NODE *statList = nodeS("StatmentList", nonterminal, _STMTLIST); 
		push(statList);
		}
;
Statement : MatchedStatement 
	  | OpenStatement 
;
MatchedStatement : ExpressionStatement 
		 | ForStatement
		 | WhileStatement
		 | ReturnStatement 
		 | CompoundStatement
		 | BreakStatement
 		 | SwitchStatement
		 | IF LS Expression RS MatchedStatement ELSE MatchedStatement {
			NODE *stmt2 = pop(); 
			NODE *stmt1 = pop(); 
			NODE *exp = pop(); 
			NODE *ifStmt = nodeS("If Statment", nonterminal, _IFSTMT); 
			mkSubtree(ifStmt, exp); 
			mkSibling(exp, stmt1); 
			mkSibling(stmt1, stmt2); 
			push(ifStmt);
			} 
;
OpenStatement : IF LS Expression RS Statement {
		NODE *stmt1 = pop(); 
		NODE *exp = pop(); 
	      	NODE *ifStmt = nodeS("If Statment", nonterminal, _IFSTMT); 
		mkSubtree(ifStmt, exp); 
		mkSibling(exp, stmt1); 
		push(ifStmt);
		}
	      | IF LS Expression RS MatchedStatement ELSE OpenStatement {
		NODE *stmt2 = pop(); 
		NODE *stmt1 = pop(); 
		NODE *exp = pop(); 
		NODE *ifStmt = nodeS("If Statment", nonterminal, _IFSTMT); 
		mkSubtree(ifStmt, exp); 
		mkSibling(exp, stmt1); 
		mkSibling(stmt1, stmt2); 
		push(ifStmt);
		}
;
SwitchStatement : SWITCH LS Expression RS LB CaseList DefaultCase RB {
			NODE *defaultNode = pop(); 
			NODE *caseList = pop(); 
			NODE *exp = pop(); 
			NODE *swStmt = nodeS("SwitchStatement", nonterminal, _SWSTMT); 
			mkSubtree(swStmt, exp);
                        mkSibling(exp, caseList);
			NODE *temp;
	                temp = caseList;
        	        // Traverse to the last node
        	        while(temp->sibling != NULL)
                	    temp = temp->sibling;
                        mkSibling(temp, defaultNode);
			push(swStmt);
			}
		;
CaseList : CaseList CASE INTEGER NSC StatementList {
		NODE *stmtList = pop(); 
	 	NODE *intNode = nodeI($3, terminal); 
		NODE *caseNode = nodeS("Case", terminal, _CASE); 
		NODE *caseList = pop(); 
		NODE *temp;
        	temp = caseList;
	        // Traverse to the last node
        	while(temp->sibling != NULL)
        	    temp = temp->sibling;
		mkSibling(temp, caseNode); 
		mkSubtree(caseNode, intNode); 
		mkSibling(intNode, stmtList); 			

		push(caseList);
		}
	 | CASE INTEGER NSC StatementList {
		NODE *intNode = nodeI($2, terminal); 
		NODE *caseNode = nodeS("Case", terminal, _CASE); 
		NODE *stmtList = pop(); 
		mkSubtree(caseNode, intNode); 
		mkSibling(intNode, stmtList); 
		push(caseNode);
		} 
;
DefaultCase : DEFAULT NSC StatementList {
		NODE *stmList = pop(); 
		NODE *defaultNode = nodeS("Default", terminal, _DEFAULT); 
		mkSubtree(defaultNode, stmList); 
		push(defaultNode);
		}
	    | {
		NODE *defaultNode = nodeS("Default", nonterminal, _DEFAULT); 
		push(defaultNode);
		}  
;
ReturnStatement : RETURN Expression SC {
			NODE *exp = pop(); 
			NODE *reStmt = nodeS("ReturnStatement", nonterminal, _RTSTMT); 
			mkSubtree(reStmt, exp); 
			push(reStmt);
			}
		| RETURN SC {
			NODE *reStmt = nodeS("ReturnStatement", nonterminal, _RTSTMT); 
			push(reStmt);
			} 
;
BreakStatement : BREAK SC {
		NODE *brkStmt=nodeS("BreakStatment", nonterminal, _BRKSTMT); 
		push(brkStmt);
		}
;
ExpressionStatement : Expression SC 
		    | SC 
;
Expression : AssignExpression 
	   | SimpleExpression
;
AssignExpression : Variable Assign Expression {
			NODE *exp = pop(); 
			NODE *assign = pop(); 
			NODE *var = pop(); 
			mkSubtree(assign, var); 
			mkSibling(var, exp); 
			push(assign);
			}
;
Variable : ID {NODE *id = nodeS($1, terminal, _ID); push(id);}
	 | ID SelectorList {
		NODE *sltList = pop(); 
		NODE *id = nodeS($1, terminal, _ID); 
		NODE *id_slt = nodeS("IdSelectorList", nonterminal, _ID_SLTS); 
		mkSubtree(id_slt, id); 
		mkSibling(id, sltList); 
		push(id_slt);
		}
;
SelectorList : SelectorList Selector {
		NODE *selector = pop(); 
		NODE *sltList = pop(); 
		NODE* temp; 
		temp = sltList->child; 
		while(temp->sibling != NULL)  
			temp = temp->sibling; 
		mkSibling(temp,selector); 
		push(sltList);
		}
	     | Selector {
		NODE *sltList = nodeS("SelectorList", nonterminal, _SLTLIST); 
		NODE *selector = pop(); 
		mkSubtree(sltList, selector);
		push(sltList);
		}
;
Selector : DOT ID {
		NODE *id = nodeS($2, terminal, _ID); 
		NODE *selector = nodeS("StructMember", nonterminal, _STRMBR); 
		mkSubtree(selector, id); 
		push(selector);
		}
	 | LL Expression RL {
		NODE *arrIndex = nodeS("ArrIndex", nonterminal, _ARRINDEX); 
		NODE *exp = pop(); 
		mkSubtree(arrIndex, exp); 
		push(arrIndex);
		}
;
SimpleExpression : SimpleExpression OR AndExpression {
			NODE *andExp = pop(); 
			NODE *or = nodeS("||", terminal, _OPER);
			NODE *simpleExp = pop(); 
			mkSubtree(or, simpleExp); 
			mkSibling(simpleExp, andExp); 
			push(or);
			}
		 | AndExpression 
;
AndExpression : AndExpression AND RelExpression {
		NODE *relExp = pop(); 
		NODE *and = nodeS("&&", terminal, _OPER); 
		NODE *andExp = pop(); 
		mkSubtree(and, andExp); 
		mkSibling(andExp, relExp); 
		push(and);
		}
	      | RelExpression 
;
RelExpression : RelExpression RelOperator AddExpression {
		NODE *addExp = pop(); 
		NODE *relOper = pop(); 
		NODE *relExp = pop(); 
		mkSubtree(relOper, relExp); 
		mkSibling(relExp, addExp); 
		push(relOper);
		} 
	      | AddExpression 
;
RelOperator : LESS {NODE *less = nodeS("<", terminal, _OPER); push(less);}
	    | LESSEQUAL {NODE *lequal = nodeS("<=", terminal, _OPER); push(lequal);}
            | GREATER {NODE *greater = nodeS(">", terminal, _OPER); push(greater);}
            | GREATEREQUAL {NODE *gequal = nodeS(">=", terminal, _OPER); push(gequal);}
            | EQUAL {NODE *equal = nodeS("==", terminal, _OPER); push(equal);}
            | NEQUAL {NODE *nequal = nodeS("!=", terminal, _OPER); push(nequal);}
;
AddExpression : AddExpression Oper1 Term {
		NODE *term = pop(); 
		NODE *oper1 = pop(); 
		NODE *addExp = pop(); 
		mkSubtree(oper1, addExp); 
		mkSibling(addExp, term); 
		push(addExp);
		}
	      | Term
;
Oper1 : PLUSE {NODE *plu = nodeS("+", terminal, _OPER); push(plu);}
      | MINUS {NODE *min = nodeS("-", terminal, _OPER); push(min);}
;
Term : Term Oper2 Factor {
	NODE *factor = pop(); 
	NODE *oper2 = pop(); 
	NODE *term = pop(); 
	mkSubtree(oper2, term); 
	mkSibling(term, factor); 
	push(oper2);
	}
     | Factor 
;
Oper2 : MUL {NODE *mul = nodeS("*", terminal, _OPER); push(mul);}
      | DIV {NODE *div = nodeS("/", terminal, _OPER); push(div);}
      | MOD {NODE *mod = nodeS("%", terminal, _OPER); push(mod);}
;
Factor : LS Expression RS 
       | FunctionCall 
       | MINUS Factor {
		NODE *factor = pop(); 
		NODE *min = pop(); 
		mkSubtree(min, factor); 
		push(min);
		}
       | Variable 
       | Variable IncDec {
	NODE *incDecExp = nodeS("IncDecExpression", nonterminal, _INCDEC_EXP); 
	NODE *incDec= pop(); 
	NODE *var = pop(); 
	mkSubtree(incDecExp, var); 
	mkSibling(var, incDec); 
	push(incDecExp);
	}
       | IncDec Variable {
	NODE *incDecExp = nodeS("IncDecExpression", nonterminal, _INCDEC_EXP); 
	NODE *var = pop(); 
	NODE *incDec = pop(); 
	mkSubtree(incDecExp, incDec); 
	mkSibling(incDec, var); 
	push(incDecExp);
	}
       | NumberLiteral
;
NumberLiteral : INTEGER {
		NODE *intNode = nodeI($1, terminal); 
		push(intNode);
		}
	      | REAL {NODE *realNode = nodeR($1, terminal); push(realNode);}
;
IncDec : PLUPLU {NODE *pluplu = nodeS("++", terminal, _OPER); push(pluplu);}
       | MINMIN {NODE *minmin = nodeS("--", terminal, _OPER); push(minmin);}
;
WhileStatement : WHILE LS Expression RS CompoundStatement {
		NODE *whlStmt = nodeS("WhileStatement", nonterminal, _WHLSTMT); 
		NODE *cpdStmt = pop(); 
		NODE *exp = pop(); 
		mkSubtree(whlStmt, exp); 
		mkSibling(exp, cpdStmt); 
		push(whlStmt);
		}
	       | WHILE LS Expression RS SC {
		NODE *whlStmt = nodeS("WhileStatement", nonterminal, _WHLSTMT); 
		NODE *exp = pop(); 
		mkSubtree(whlStmt, exp); 
		push(whlStmt);
		} 
;
ForStatement : FOR LS Expression SC Expression SC Expression RS SC {
		NODE *forStmt = nodeS("ForStatement", nonterminal, _FORSTMT); 
		NODE *exp3 = pop(); 
		NODE *exp2 = pop(); 
		NODE *exp1 = pop(); 
		mkSubtree(forStmt, exp1); 
		mkSibling(exp1, exp2); 
		mkSibling(exp2, exp3); 
		push(forStmt);
		}
	     | FOR LS Expression SC Expression SC Expression RS CompoundStatement {
		NODE *forStmt = nodeS("ForStatement", nonterminal, _FORSTMT); 
		NODE *cpdStmt = pop(); 
		NODE *exp3 = pop(); 
		NODE *exp2 = pop(); 
		NODE *exp1 = pop(); 
		mkSubtree(forStmt, exp1);
		mkSibling(exp1, exp2); 
		mkSibling(exp2, exp3); 
		mkSibling(exp3, cpdStmt); 
		push(forStmt);
		}
;
FunctionCall : ID LS Arguments RS {
		NODE *funCall = nodeS("FunctionCall", nonterminal, _FUNCALL); 
		NODE *id = nodeS($1, terminal, _ID); 
		NODE *argmentNode = pop();
		mkSubtree(funCall, id);
	        mkSibling(id, argmentNode);
		push(funCall);
		}
	     ;
Arguments : ArgumentList {
	  	NODE *args = nodeS("Args", nonterminal, _ARGS); 
		NODE *argumentList = pop();  
		mkSubtree(args, argumentList); 
		push(args);
		}
	  | {NODE *argsNode = nodeS("Args", nonterminal, _ARGS); push(argsNode);}
;
ArgumentList : ArgumentList S Expression{
		NODE *expNode = pop(); 
		NODE *argList = pop();
		NODE* temp;
        	temp = argList;
	        // Traverse to the last node
        	while(temp->sibling != NULL)
	            temp = temp->sibling;
		mkSibling(temp, expNode);
		push(argList);
		}
	     | ArgumentList S STRING {
			NODE *strNode = nodeS($3, terminal, _STRING);
			NODE *argList = pop();
			NODE* temp;
                	temp = argList;
        	        // Traverse to the last node
	                while(temp->sibling != NULL)
                	    temp = temp->sibling;
        	        mkSibling(temp, strNode);
	                push(argList);
			}
             | Expression
             | STRING {NODE *stringNode = nodeS($1, terminal, _STRING); push(stringNode);}
;
Assign : ASIGN {NODE *asignNode = nodeS("=", terminal, _OPER); push(asignNode);}
       | MINAIG {NODE *minaigNode = nodeS("-=", terminal, _OPER); push(minaigNode);}
       | PLUAIG {NODE *pluaigNode = nodeS("+=", terminal, _OPER); push(pluaigNode);} 
       | MLUAIG {NODE *mluaigNode = nodeS("*=", terminal, _OPER); push(mluaigNode);}
       | DIVAIG {NODE *divaigNode = nodeS("/=", terminal, _OPER); push(divaigNode);}
       | MODAIG {NODE *modaigNode = nodeS("%=", terminal, _OPER); push(modaigNode);} 
; 
%%
int main(int argc, char* argv[]){
	if(argc == 1)	exit(0);
	extern FILE *yyin;
	initStack();
	yyin = fopen(argv[1], "r");
	yyparse();
	printTree(pop());
	fclose(yyin);
	return 0;
}
