%{
#include <stdio.h>
#include <stdlib.h>
int yylex(void);
int yyerror(char*);
%}

%union{
	int iVal;
	float rVal;
	char cVal;
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
Program : DeclarationList {printf("Program -> DeclarationList\n");}
	;
DeclarationList : DeclarationList Declaration {printf("DeclarationList -> DeclarationList Declaration\n");}
		| Declaration {printf("DeclarationList -> Declaration\n");}
;
Declaration : VarDeclaration {printf("Declaration -> VarDeclaration\n");}
	    | FuncDeclaration {printf("Declaration -> FuncDeclaration\n");}
	    | StructDeclaration {printf("Declaration -> StructDeclaration\n");}
;
VarDeclaration : TypeSpecifier IDs SC {printf("VarDeclaration -> TypeSpecifier IDs ;\n");}
;
IDs : IDs S Value {printf("IDs -> IDs , Value\n");}
    | IDs S Value ASIGN Expression {printf("IDs -> IDs , Value = Expression\n");}
    | IDs S Value ASIGN STRING {printf("IDs -> IDs , Value = STRING\n");}
    | Value {printf("IDs -> Value\n");}
    | Value ASIGN Expression {printf("IDs ->  Value = Expression\n");}
    | Value ASIGN STRING {printf("IDs ->  Value = STRING\n");}
;
Value : Value LL INTEGER RL {printf("Value -> Value [ INTEGER ]\n");}
      | ID {printf("Value -> ID\n");}
;
FuncDeclaration : TypeSpecifier ID LS Params RS CompoundStatement {printf("FuncDeclaration -> TypeSpecifier ID ( Params ) CompoundStatement\n");}
		| TypeSpecifier ID LS Params RS SC {printf("FuncDeclaration -> TypeSpecifier ID ( Params ) ;\n");}
;
StructDeclaration : StructTypeDeclaration SC {printf("StructDeclaration -> StructTypeDeclaration ;\n");}
		  ;
StructTypeDeclaration : STRUCT ID LB LocalDeclarationList RB {printf("StructTypeDeclaration -> struct ID { LocalDeclarationList }\n");}
		     ;
Params : ParamList {printf("Parms -> ParamList\n");}
       | VOID {printf("Parms -> void\n");}
       |  {printf("Params -> Empty\n");}
;
ParamList : ParamList S Param {printf("ParamList -> ParamList , Param\n");}
	  | Param {printf("ParamList -> Param\n");}
;
Param : TypeSpecifier Value {printf("Param -> TypeSpecifier Value\n");}
      ;
TypeSpecifier : INT {printf("TypeSpecifier -> int\n");}
	      | VOID {printf("TypeSpecifier -> void\n");}
	      | CHAR {printf("TypeSpecifier -> char\n");}
	      | FLOAT {printf("TypeSpecifier -> float\n");}
	      | StructType {printf("TypeSpecifier -> StructType\n");}
;
StructType : StructTypeDeclaration {printf("StructType -> StructTypeDeclaration\n");}
	   | StructTypeReference {printf("StructType -> StructTypeReference\n");}
;
StructTypeReference : STRUCT ID {printf("StructTypeReference -> struct ID\n");}
		   ; 
CompoundStatement : LB LocalDeclarationList StatementList RB {printf("CompoundStatement -> { LocalDeclarationList StatementLis }\n");}
		  ;
LocalDeclarationList : LocalDeclarationList VarDeclaration {printf("LocalDeclarationList -> LocalDeclarationList VarDeclaration\n");}
		     | 	{printf("LocalDeclarationList -> Empty\n");}
;
StatementList : StatementList Statement {printf("StatementList ->  StatementList Statement\n");}
	      |  {printf("StatementList -> Empty\n");}
;
Statement : MatchedStatement {printf("Statement -> MatchedStatement\n");}
	  | OpenStatement {printf("Statemnet -> OpenStatement\n");}
;
MatchedStatement : ExpressionStatement {printf("MatchedStatement -> ExpressionStatement\n");}
		 | ForStatement {printf("MatchedStatement -> ForStatement\n");}
		 | WhileStatement {printf("MatchedStatement -> WhileStatement\n");}
		 | ReturnStatement {printf("MatchedStatement -> ReturnStatement\n");}
		 | CompoundStatement {printf("MatchedStatement -> CompoundStatement\n");}
		 | BreakStatement {printf("MatchedStatement -> BreakStatement\n");}
 		 | SwitchStatement {printf("MatchedStatement -> SwitchStatement\n");}
		 | IF LS Expression RS MatchedStatement ELSE MatchedStatement {printf("MatchedStatement -> if ( Expression ) MatchedStatement else MatchedStatement\n");}
;
OpenStatement : IF LS Expression RS Statement {printf("if ( Expression ) Statement\n");}
	      | IF LS Expression RS MatchedStatement ELSE OpenStatement {printf("if ( Expression ) MatchedStatement else OpenStatement\n");}
;
SwitchStatement : SWITCH LS Expression RS LB CaseList DefaultCase RB {printf("SwitchStatement : switch ( Expression ) { CaseList DefaultCase }\n");}
;
CaseList : CaseList CASE INTEGER NSC StatementList {printf("CaseList -> CaseList case INTEGER : StatementList\n");}
	 | CASE INTEGER NSC StatementList {printf("CaseList -> case INTEGER : StatementList\n");}
;
DefaultCase : DEFAULT NSC StatementList {printf("DefaultCase -> default : StatementList\n");}
	    | 	{printf("DefaultCase -> Empty\n");}
;
ReturnStatement : RETURN Expression SC {printf("ReturnStatement -> return Expression ;\n");}
		| RETURN SC {printf("ReturnStatement -> return ;\n");}
;
BreakStatement : BREAK SC {printf("BreakStatement -> break ;\n");} 
;
ExpressionStatement : Expression SC {printf("ExpressionStatement -> Expression ;\n");}
		    | SC {printf("EcpressionStatment -> Empty ;\n");}
;
Expression : AssignExpression {printf("Expression -> AssignExpression\n");}
	   | SimpleExpression {printf("Expression -> SimpleExpression\n");}
;
AssignExpression : Variable Assign Expression {printf("AssignExpression -> Variable Assign Expression\n");}
;
Variable : ID {printf("Variable -> ID\n");}
	 | ID SelectorList {printf("Variable -> ID SelectorList\n");}
;
SelectorList : SelectorList Selector {printf("SelectorList -> SelectorList Selector\n");}
	     | Selector {printf("SelectorList -> Selector\n");}
;
Selector : DOT ID {printf("Selector -> . ID\n");}
	 | LL Expression RL {printf("Selector -> [ Expression]\n");}
;
SimpleExpression : SimpleExpression OR AndExpression {printf("SimpleExpression -> SimpleExpression || AndExpression\n");}
		 | AndExpression {printf("SimpleExpression -> AndExpression\n");}
;
AndExpression : AndExpression AND RelExpression {printf("AndExpression -> AndExpression && RelExpression\n");}
	      | RelExpression {printf("AndExpression -> RelExpression\n");}
;
RelExpression : RelExpression RelOperator AddExpression {printf("RelExpression -> RelExpression RelOperator AddExpression\n");}
	      | AddExpression {printf("RelExpression -> AddExpression\n");}
;
RelOperator : LESS {printf("RelOperator -> <\n");}
	    | LESSEQUAL {printf("RelOperator -> <=\n");}
            | GREATER {printf("RelOperator -> >\n");}
            | GREATEREQUAL {printf("RelOperator -> >=\n");}
            | EQUAL {printf("RelOperator -> ==\n");}
            | NEQUAL {printf("RelOperator -> !=\n");}
;
AddExpression : AddExpression Oper1 Term {printf("AddExpression -> AddExpression Oper1 Term\n");}
	      | Term {printf("AddExpression -> Term\n");}
;
Oper1 : PLUSE {printf("Oper1 -> +\n");}
      | MINUS {printf("Oper1 -> -\n");}
;
Term : Term Oper2 Factor {printf("Term -> Term Oper2 Factor\n");}
     | Factor {printf("Term -> Factor\n");}
;
Oper2 : MUL {printf("Oper2 -> * \n");}
      | DIV {printf("Oper2 -> / \n");}
      | MOD {printf("Oper2 -> %% \n");}
;
Factor : LS Expression RS {printf("Factor -> ( Expression )\n");}
       | FunctionCall {printf("Factor -> FunctionCall\n");}
       | MINUS Factor  {printf("Factor -> - Factor\n");}
       | Variable {printf("Factor -> Variable\n");}
       | Variable IncDec {printf("Factor -> Variable InDec\n");}
       | IncDec Variable {printf("Factor -> IncDec Variable\n");}
       | NumberLiteral {printf("Factor -> NumberLiteral\n");}
;
NumberLiteral : INTEGER {printf("Numberiteral -> %d\n", $1);}
	      | REAL {printf("Numberiteral -> %f\n", $1);}
;
IncDec : PLUPLU {printf("IncDec -> ++\n");}
       | MINMIN {printf("IncDec -> --\n");}
;
WhileStatement : WHILE LS Expression RS CompoundStatement {printf("WhileStatement -> while ( Expression ) CompoundStatement\n");}
	       | WHILE LS Expression RS SC {printf("WhileStatement -> while ( Expression );\n");}
;
ForStatement : FOR LS Expression SC Expression SC Expression RS SC {printf("ForStatement -> for(Expression; Expression; Expression);\n");}
	     | FOR LS Expression SC Expression SC Expression RS CompoundStatement {printf("ForStatement -> for(Expression; Expression; Expression) CompoundStatement\n");}
;
FunctionCall : ID LS Arguments RS {printf("FunctionCall -> ID(Arguments)\n");}
	     ;
Arguments : ArgumentList {printf("Arguments -> ArgumentList\n");}
	  | 	{printf("Arguments -> Empty\n");}
;
ArgumentList : ArgumentList S Expression{printf("ArgumentList -> ArgumentList, Expression\n");}
	     | ArgumentList S STRING{printf("ArgumentList -> ArgumentList, STRING\n");}
             | Expression{printf("ArgumentList -> Expression\n");}
             | STRING {printf("ArgumentList -> STRING\n");}
;
Assign : ASIGN {printf("Assign -> = \n ");}
       | PLUAIG {printf("Assign -> += \n ");}
       | MLUAIG {printf("Assign -> *= \n ");}
       | DIVAIG {printf("Assign -> /= \n ");}
       | MODAIG {printf("Assign -> %%= \n ");}
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

