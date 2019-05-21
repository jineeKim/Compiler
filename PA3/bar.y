%{
#include "util.h"
#include <stdio.h>
#include <stdlib.h>
int yylex(void);
int yyerror(char*);
void insertNodeAtEnd(NODE* data);
%}

%union{
	int iVal;
	float rVal;
	char cVal;
	char *sVal;
}
%token <iVal> INTEGER
%token <rVal> REAL
%token INT STRING VOID CHAR FLOAT
%token IF ELSE
%token SWITCH CASE DEFAULT BREAK RETURN
%token ID STRUCT
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
Program : DeclarationList {initStack(); NODE *declList = pop(); NODE *prog = nodeS("Program", nonterminal, _PROG); mkSubtree(prog, declList); push(prog); }
	;
DeclarationList : DeclarationList Declaration {initStack(); NODE *dec = pop(); NODE *decList = pop(); insertNodeAtEnd(decList);}
		| Declaration 
;
Declaration : VarDeclaration
	    | FuncDeclaration 	    
	    | StructDeclaration 
;
VarDeclaration : TypeSpecifier IDs SC {initStack(); NODE *ids = pop(); NODE *tyoe = pop(); NODE *varDecl = nodeS("VarDeclaration", nonterminal, _VARDEC); mkSubtree(varDecl, type); mkSibling(type, ids); push(varDecl);} 
	       ;
IDs : IDs S Value {initStack(); NODE *val = pop(); NODE *valList = pop(); insertNodeAtEnd(valList);}
    | Value 
;
Value : Value LL INTEGER RL
      | ID {initStack(); NODE *id = nodeS("id", terminal, _ID); push(id);}  
;
FuncDeclaration : TypeSpecifier ID LS Params RS CompoundStatement  {initStack(); NODE *cpdStmt = pop(); NODE *params = pop(); NODE *id = nodeS("id", terminal, _ID); NODE *type=pop(); NODE *funDec = nodeS("FuncDeclaration", nonterminal, _FUNDEC); mkSubtree(funDec, type); mkSibling(type, id); mkSibling(id, params); mkSibling(params, cpdStmt); push(funDec);} 
		| TypeSpecifier ID LS Params RS SC {initStack(); NODE *params = pop(); NODE *id = nodeS("id", terminal, _ID); NODE *type=pop(); NODE *funDec = nodeS("FuncDeclaration", nonterminal, _FUNDEC); mkSubtree(funDec, type); mkSibling(type, id); mkSibling(id, params); push(funDec);} 
;
StructDeclaration : StructTypeDeclaration SC {initStack(); NODE *strDec = nodeS("StructDeclaration", nonterminal, _STRDEC); NODE *strType = pop(); mkSubtree(strDec, strType); push(strDec);}
		  ;
StructTypeDeclaration : STRUCT ID LB LocalDeclarationList RB  {initStack(); NODE *ldecList = pop(); NODE *id  = nodeS("id", terminal, _ID); NODE *strType = nodeS("StructTypeDeclaration", nonterminal, _STRTYPE); mkSubtree(strType, id); mkSibling(ldecList, id); push(strType);}
		     ;
Params : ParamList {initStack(); NODE *paramList = pop(); NODE *params = nodeS("Params", nonterminal, _PARAM); mkSubtree(params, paramList); push(params);}
       | VOID {initStack(); NODE *voidNode = nodeS("void", terminal, _TYPE); NODE *params = nodeS("Params", nonterminal, _PARAM); mkSubtree(params, voidNode); push(params);}
       |  {initStack(); NODE *params = nodeS("Params", nonterminal, _PARAM); push(params);}
;
ParamList : ParamList S Param  {NODE *param = pop();  insertNodeAtEnd(param);}
	  | Param 
;
Param : TypeSpecifier Value  {initStack(); NODE *val = pop(); NODE *type = pop(); NODE *param = nodeS("Param", nonterminal, _PARAM); mkSubtree(param, type); mkSibling(type, val); push(param);}
      ;
TypeSpecifier : INT {initStack(); NODE *intNode = nodeS("int", terminal, _TYPE); push(intNode);}
	      | VOID {initStack(); NODE *voidNode = nodeS("void", terminal, _TYPE); push(voidNode);}
	      | CHAR {initStack(); NODE *charNode = nodeS("char", terminal, _TYPE); push(charNode);}
	      | FLOAT {initStack(); NODE *floatNode = nodeS("float", terminal, _TYPE); push(floatNode);}
	      | StructType
;
StructType : StructTypeDeclaration
	   | StructTypeReference
;
StructTypeReference : STRUCT ID {initStack(); NODE *strType = nodeS("StructTypeReference", nonterminal, _STRTYPE); NODE *id = nodeS("id", terminal, _ID); mkSubtree(strType, id); push(strType); }
		   ; 
CompoundStatement : LB LocalDeclarationList StatementList RB {initStack(); NODE *stmtList = pop(); NODE *ldecList = pop(); NODE *cpdStmt = nodeS("CompoundStatement", nonterminal, _CPDSTMT); mkSubtree(cpdStmt, ldecList); mkSibling(ldecList, stmtList); push(cpdStmt);}
		  ;
LocalDeclarationList : LocalDeclarationList VarDeclaration  {NODE *var = pop(); NODE *ldecList = pop(); NODE* temp; temp = ldecList->child; while(temp->sibling != NULL)  temp = temp->sibling; mkSibling(temp, var); push(ldecList);}
		     | 	{initStack() NODE *ldecList = nodeS("LocalDeclarationList", nonterminal, _LDECLIST); push(ldecList);}
;
StatementList : StatementList Statement {NODE *stmt = pop(); NODE *stmtList = pop(); NODE* temp; temp = stmtList->child; while(temp->sibling != NULL)  temp = temp->sibling; mkSibling(temp, stmt); push(stmtList);}
	      |  {initStack() NODE *statList = nodeS("StatmentList", nonterminal, _STMTLIST); push(statList);}
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
		 | IF LS Expression RS MatchedStatement ELSE MatchedStatement {initStack(); NODE *stmt2 = pop(); NODE *stmt1 = pop(); NODE *exp = pop(); NODE *ifStmt = nodeS("If Statment", nonterminal, _IFSTMT); mkSubtree(ifStmt, exp); mkSibling(exp, stmt1); mkSibling(stmt1, stmt2); push(ifStmt);} 
;
OpenStatement : IF LS Expression RS Statement {initStack(); NODE *stmt1 = pop(); NODE *exp = pop(); NODE *ifStmt = nodeS("If Statment", nonterminal, _IFSTMT); mkSubtree(ifStmt, exp); mkSibling(exp, stmt1); push(ifStmt);}
	      | IF LS Expression RS MatchedStatement ELSE OpenStatement {initStack(); NODE *stmt2 = pop(); NODE *stmt1 = pop(); NODE *exp = pop(); NODE *ifStmt = nodeS("If Statment", nonterminal, _IFSTMT); mkSubtree(ifStmt, exp); mkSibling(exp, stmt1); mkSibling(stmt1, stmt2); push(ifStmt);}
;
SwitchStatement : SWITCH LS Expression RS LB CaseList DefaultCase RB {initStack(); NODE *defaultNode = pop(); NODE *caseList = pop(); NODE *exp = pop(); NODE *swStmt = nodeS("SwitchStatement", nonterminal, _SWSTMT); mkSubtree(swStmt, exp); mkSibling(exp, caseList); mkSibling(caseList, defaultNode); push(swStmt);}
;
CaseList : CaseList CASE INTEGER NSC StatementList {initStack(); NODE *stmtList = pop(); NODE *intNode = nodeI($3, terminal); NODE *caseNode = nodeS("Case", nonterminal, _CASE); NODE *caseList = pop(); mkSibling(caseList, caseNode); mkSubtree(caseNode, intNode); mkSibling(intNode, stmtList); push(caseNode);}
	 | CASE INTEGER NSC StatementList {initStack(); NODE *intNode = nodeI($2, terminal); NODE *caseNode = nodeS("Case", nonterminal, _CASE); NODE *stmtList = pop(); mkSubtree(caseNode, intNode); mkSibling(intNode, stmtList); push(caseNode);} 
;
DefaultCase : DEFAULT NSC StatementList {initStack(); NODE *stmList = pop(); NODE *defaultNode = nodeS("ReturnStatement", nonterminal, _DEFAULT); mkSubtree(defaultNode, stmList); push(defaultNode);}
	    | {initStack(); NODE *defaultNode = nodeS("Default", nonterminal, _DEFAULT); push(defaultNode);}  
;
ReturnStatement : RETURN Expression SC {initStack(); NODE *exp = pop(); NODE *reStmt = nodeS("ReturnStatement", nonterminal, _RTSTMT); mkSubtree(reStmt, exp); push(reStmt);}
		| RETURN SC {initStack(); NODE *reStmt = nodeS("ReturnStatement", nonterminal, _RTSTMT); push(reStmt);} 
;
BreakStatement : BREAK SC {initStack(); NODE *brkStmt=nodeS("BreakStatment", nonterminal, _BRKSTMT); push(brkStmt);}
;
ExpressionStatement : Expression SC 
		    | SC 
;
Expression : AssignExpression 
	   | SimpleExpression
;
AssignExpression : Variable Assign Expression {initStack(); NODE *var = pop(); NODE *assign = pop(); NODE *exp = pop(); mkSubtree(assign, var); mkSibling(var, exp); push(assign);}
;
Variable : ID {initStack(); NODE *id = nodeS("id", terminal, _ID); push(id);}
	 | ID SelectorList {initStack(); NODE *sltList = pop(); NODE *id = nodeS("id", terminal, _ID); NODE *id_slt = nodeS("IdSelectorList", nonterminal, _ID_SLTS); mkSubtree(id_slt, id); mkSibling(id, sltList); push(id_slt);}
;
SelectorList : SelectorList Selector {initStack(); NODE *sltList = pop(); NODE *selector = pop(); NODE* temp; temp = sltList->child; while(temp->sibling != NULL)  temp = temp->sibling; mkSibling(temp,selector); push(sltList);
 }
	     | Selector {initStack(); NODE *sltList = nodeS("SelectorList", nonterminal, _SLTLIST); NODE *selector = pop(); mkSubtree(sltList, selector);}
;
Selector : DOT ID {initStack(); NODE *id = nodeS("id", terminal, _ID); NODE *selector = nodeS("Selector", nonterminal, _STRMBR); mkSubtree(selector, id); push(selector);}
	 | LL Expression RL {initStack(); NODE *arrIndex = nodeS("ArrIndex", nonterminal, _ARRINDEX); NODE *exp = pop(); mkSubtree(arrIndex, exp); push(arrIndex);}
;
SimpleExpression : SimpleExpression OR AndExpression {initStack(); NODE *andExp = pop(); NODE *or = pop(); NODE *simpleExp = pop(); mkSubtree(or, simpleExp); mkSibling(simpleExp, andExp); push(or);}
		 | AndExpression 
;
AndExpression : AndExpression AND RelExpression {initStack(); NODE *relExp = pop(); NODE *and = pop(); NODE *andExp = pop(); mkSubtree(and, andExp); mkSibling(andExp, relExp); push(and);}
	      | RelExpression 
;
RelExpression : RelExpression RelOperator AddExpression {initStack(); NODE *addExp = pop(); NODE *relOper = pop(); NODE *relExp = pop(); mkSubtree(relOper, relExp); mkSibling(relExp, addExp); push(relOper);} 
	      | AddExpression 
;
RelOperator : LESS {initStack(); NODE *less = nodeS("<", terminal, _OPER); push(less);}
	    | LESSEQUAL {initStack(); NODE *lequal = nodeS("<=", terminal, _OPER); push(lequal);}
            | GREATER {initStack(); NODE *greater = nodeS(">", terminal, _OPER); push(grater);}
            | GREATEREQUAL {initStack(); NODE *gequal = nodeS(">=", terminal, _OPER); push(gequal);}
            | EQUAL {initStack(); NODE *equal = nodeS("=", terminal, _OPER); push(equal);}
            | NEQUAL {initStack(); NODE *nequal = nodeS("!=", terminal, _OPER); push(nequal);}
;
AddExpression : AddExpression Oper1 Term {initStack(); NODE *term = pop(); NODE *oper1 = pop(); NODE *addExp = pop(); mkSubtree(oper1, addExp); mkSibling(addExp, term); push(addExp);}
	      | Term
;
Oper1 : PLUSE {initStack(); NODE *plu = nodeS("+", nonterminal, _OPER); push(plu);}
      | MINUS {initStack(); NODE *min = nodeS("-", nonterminal, _OPER); push(min);}
;
Term : Term Oper2 Factor {initStack(); NODE *factor = pop(); NODE *oper2 = pop(); NODE *term = pop(); mkSubtree(oper2, term); mkSibling(term, factor); push(oper2);}
     | Factor 
;
Oper2 : MUL {initStack(); NODE *mul = nodeS("*", nonterminal, _OPER); push(mul);}
      | DIV {initStack(); NODE *div = nodeS("/", nonterminal, _OPER); push(div);}
      | MOD {initStack(); NODE *mod = nodeS("%", nonterminal, _OPER); push(mod);}
;
Factor : LS Expression RS 
       | FunctionCall 
       | MINUS Factor {initStack(); NODE *factor = pop(); NODE *min = pop(); mkSubtree(min, factor); push(min);}
       | Variable 
       | Variable IncDec {initStack(); NODE *incDecExp = nodeS("IncDecExpression", nonterminal, _INCDEC_EXP); NODE *incDec= pop(); NODE *var = pop(); mkSubtree(incDecExp, var); mkSibling(var, incDec); push(incDecExp);}
       | IncDec Variable {initStack(); NODE *incDecExp = nodeS("IncDecExpression", nonterminal, _INCDEC_EXP); NODE *incDec = pop(); NODE *var = pop(); mkSubtree(incDecExp, incDec); mkSibling(incDec, var); push(incDecExp);}
       | NumberLiteral
;
NumberLiteral : INTEGER {initStack(); NODE *intNode = nodeI($2, teminal); push(intNode);}
	      | REAL {initStack(); NODE *realNode = nodeR($2, teminal); push(realNode);}
;
IncDec : PLUPLU {initStack(); NODE *pluplu = nodeS("++", nonterminal, _OPER); push(pluplu);}
       | MINMIN {initStack(); NODE *minmin = nodeS("--", nonterminal, _OPER); push(minmin);}
;
WhileStatement : WHILE LS Expression RS CompoundStatement {initStack(); NODE *whlStmt = nodeS("WhileStatement", nonterminal, _WHLSTMT); NODE *cpdStmt = pop(); NODE *exp = pop(); mkSubtree(whlStmt, exp); mkSibling(exp, cpdStmt); push(whlStmt);}
	       | WHILE LS Expression RS SC {initStack(); NODE *whlStmt = nodeS("WhileStatement", nonterminal, _WHLSTMT); NODE *exp = pop(); mkSubtree(whlStmt, exp); push(whlStmt);} 
;
ForStatement : FOR LS Expression SC Expression SC Expression RS SC {initStack(); NODE *forStmt = nodeS("ForStatement", nonterminal, _FORSTMT); NODE *exp1 = pop(); NODE *exp2 = pop(); NODE *exp3 = pop(); mkSubtree(forStmt, exp1); mkSibling(exp1, exp2); mkSibling(exp2, exp3); push(forStmt);}
	     | FOR LS Expression SC Expression SC Expression RS CompoundStatement {initStack(); NODE *forStmt = nodeS("ForStatement", nonterminal, _FORSTMT); NODE *exp3 = pop(); NODE *exp2 = pop(); NODE *exp1 = pop(); NODE *cpdStmt = pop(); mkSubtree(forStmt, exp1); mkSibling(exp1, exp2); mkSibling(exp2, exp3); mkSibling(exp3, cpdStmt); puch(forStmt);}
;
FunctionCall : ID LS Arguments RS {initStack(); NODE *funCall = nodeS("FunctionCall", nonterminal, _FUNCALL); NODE *id = nodeS("id", terminal, _ID); NODE *argmentNode = pop(); mkSubtree(funCall, id); mkSibling(id, argmentNode); push(funCall);}
	     ;
Arguments : ArgumentList {NODE *args = nodeS("Args",nonterminal, _ARGS); initStack(); NODE *argumentList = pop();  mkSubtree(args, argumentList); push(args);}
	  | {NODE *argsNode = nodeS("Args",nonterminal, _ARGS); initStack(); push(argsNode);}
;
ArgumentList : ArgumentList S Expression{initStack(); NODE *expressionNode = pop(); insertNodeAtEnd(expressionNode);}
	     | ArgumentList S STRING {NODE *stringNode = pop();  insertNodeAtEnd(stringNode);}
             | Expression
             | STRING {NODE *stringNode = nodeS("String", terminal, _STRING); initStack(); push(stringNode);}
;
Assign : ASIGN {NODE *asignNode = nodeS("=", terminal, _OPER); initStack(); push(asignNode);}
       | MINAIG {NODE *minaigNode = nodeS("-=", terminal, _OPER); initStack(); push(minaigNode);}
       | PLUAIG {NODE *pluaigNode = nodeS("+=", terminal, _OPER); initStack(); push(pluaigNode);} 
       | MLUAIG {NODE *mluaigNode = nodeS("*=", terminal, _OPER); initStack(); push(mluaigNode);}
       | DIVAIG {NODE *divaigNode = nodeS("/=", terminal, _OPER); initStack(); push(divaigNode);}
       | MODAIG {NODE *modaigNode = nodeS("%=", terminal, _OPER); initStack(); push(modaigNode);} 
; 
%%
int main(int argc, char* argv[]){
	if(argc == 1)	exit(0);
	extern FILE *yyin;
	yyin = fopen(argv[1], "r");
	yyparse();
	fclose(yyin);
	return 0;
}
void insertNodeAtEnd(NODE* data){
	initStack();
	NODE* list = pop();
	NODE* temp;
        temp = list;

        // Traverse to the last node
        while(temp->sibling != NULL)
            temp = temp->sibling;
	
	mkSibling(temp,data);
	push(list);
}
