# PA1

>Flex 를 이용하여 C 소스코드를 위한 Lexical Analyzer 만들기 <br>
Flex를 이용하여 아래에 있는 토큰들을 분리할 수 있는 lexical analyzer를 만드는 것이다. <br><br>
출력은 다음과 같 은 형식을 따른다.<br>
[토큰] -> [토큰 이름], [토큰 값 (상수일 때)], [line], [position] <br>
-[line]은 소스코드의 위에서부터 몇 번째 줄에 있는지에 대한 값이다. 맨 위를 0번째라 가정한다. <br>
-[position]은 소스코드의 왼쪽에서부터 몇 번째 칸에 있는지에 대한 값이다. 맨 왼쪽을 0번째라 하며, 탭 하
나는 1 칸이라 가정한다.

1. Identifier 
* 대문자, 소문자, 또는 아래 밑줄로 시작 가능
* 두번째 문자부터는 대문자, 소문자, 아래 밑줄, 숫자 모두 가능
* Keyword는 제외

2. Keyword
* break, case, char, default, else, float, for, if, int, return, struct, switch, void, while

3. Character constant
* 전부 ascii code로 변환 가능해야 함.

4. String constant
* 두 개의 " 와 그 사이에 있는 character들의 열

5. Integer constant
* C언어에서 정수 상수는 10진수, 8진수, 16진수로 표현이 가능하고, token value에서는 모든 정수가 10진수로 표현된다.

6. Real constant
* 391.143E21, 12e8 과 같은 형태도 고려해야함.

7. Comment
* C언어에서 주석은 두 가지로, //로 시작하는 한 줄짜리 주석과 여러줄짜리 주석이 있다.

8. Operator
* \+ - * / % ! = < > += -= *= /= %= == != <= >= << >> && || ++ -- ,

9. Punctuation symbol
* { } [ ] ( ) ; : .


<br>

__Linux 환경에서 실행 : make clean -> make -> ./bar test.c__

<br>

---------------

<br>

# PA2

>Yacc 을 이용하여 C 소스코드를 위한 Parser 만들기 <br>
C언어로 된 소스코드로부터 분석된 형태소들을 이용하여 parsing tree를 생성해주는 parser를 만 드는 것이다.

* start symbol 
  + Program

* terminal symbol 
  + =, +=, -=, *=, /=, %=, +, -, *, /, %, epsilon, (, ), ;, ,, <, <=, >, >=, ==, !=, &&, ||, STRING, ID, STRUCT, void, int, char, float, if, else, switch, case, default, INTEGER, REAL, {, }, return, break, while, for


<br>

__Linux 환경에서 실행 : make clean -> make -> ./baz test.c__

<br>

---------------

<br>

# PA3

>Abstract Syntax Tree 만들기

* util.h, util.c 
  + AST를 만들기 위한 함수들과 Stack을 사용하기 위한 함수를 정의함.
  + nodeI, nodeR, nodeS는 각각 정숫값, 실숫값, 그외의 값을 저장하기 위한 node를 만드는 함수.
  + mkSibling은 sibling을 설정하는 함수.
  + mkSubtree는 child를 설정하는 함수.
  + printTree 함수는 인자로 들어가는 node를 root로 두는 subtree를 prefix 탐방 방식으로 보여주는 함수.
  + Stack을 용이하게 사용하기 위해 initStack()과 printStack() 둠.

* bar.y 
  + util.h를 직접적으로 사용하여 생성규칙의 Action에 Abstract Syntax Tree 를 구성하는 알고리즘 구현.
  + main 함수에서 parsing이 끝난 후 AST를 출력할 수 있게 함.
  
  <br>
**Linux 환경에서 실행 : make clean -> make -> ./baz test.c**


