#include <iostream>
using namespace std;
#define MAX_STACK_SIZE 100

typedef char element;
class stack_class {
public:
	element mystack[MAX_STACK_SIZE];//배열방식으로 구현
	int top; //stack pointer

	stack_class() { // 생성자 함수
		top = -1;
	}

	bool is_empty() {
		// if (top == -1) return true;
		// else return false;
		return (top == -1);
	}

	bool is_full() {
		//if (top == MAX_STACK_SIZE - 1) return true;
		//else return false;
		return (top == (MAX_STACK_SIZE - 1));
	}

	void push(element data) {
		if (is_full()) {
			cout << "ERROR : STACK FULL" << endl;
			return; // exit();
		}
		else {
			//top++;
			//mystack[top] = data;
			mystack[++top] = data;
		}
	}

	element pop() {
		if (is_empty()) {
			cout << "ERROR : STACK EMPTY" << endl;
			exit; //return;
		}
		else {
			//int x = mystack[top];
			//top--;
			//return (x);
			return mystack[top--]; //바뀌기 전에 top의 데이터를 빼고 나중에 top의 값을 줄여줌
		}
	}

	void printStack() {
		for (int i = top; i >= 0; i--)
			cout << mystack[i] << endl;
	}
};


void main()
{
	
	//17.05.18
	//중위표기식(infix)을 후위표기식(postfix)로 변환
	char infix[500];
	cout << "Enter infix Expression : ";
	cin.getline(infix, 500, '\n');
	cout << infix << "==>" << endl;
	stack_class MyStack;
	
	for (int i = 0; i <= strlen(infix); i++)
	{

		//여는 괄호인 경우
		if (infix[i] == '(') continue;
		//닫는 괄호인 경우
		else if (infix[i] == ')') {
			cout << MyStack.pop() << " ";
		}
	
		//사칙연산인 경우는 push 한다.

		else if (infix[i] == '+') {
			MyStack.push(infix[i]);
		}
		else if (infix[i] == '*') {
			MyStack.push(infix[i]);
		}
		else if (infix[i] == '-') {
			MyStack.push(infix[i]);
		}
		else if (infix[i] == '/') {
			MyStack.push(infix[i]);
		}

		//피연산자인 경우 (space 포함)
		else {
			cout <<" "<< infix[i];
		}
	}
	cout << endl;
}