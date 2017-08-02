#include <iostream>
using namespace std;
#define MAX_STACK_SIZE 100

typedef int element;
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
	//후위표기식(postfix)을 입력받음
	char postfix[500];
	cout << "Enter infix Expression : ";
	cin.getline(postfix, 500, '\n');
	cout << postfix << " ==> ";

	stack_class MyStack;

	for (int i = 0; i <= strlen(postfix); i++) {
		//피연산자면
		if (postfix[i] >= '0' && postfix[i] <= '9') { // 숫자이면
			MyStack.push(postfix[i] - '0'); // 문자를 숫자로 바꾸는 대표적인 (?
		}
		// 연산자면
		else if (postfix[i] == '*') {
			int opr2 = MyStack.pop(); // 연산의 오른쪽에 와야할 친구
			int opr1 = MyStack.pop();
			MyStack.push(opr1 * opr2);
		}
		else if (postfix[i] == '+') {
			int opr2 = MyStack.pop();
			int opr1 = MyStack.pop();
			MyStack.push(opr1 + opr2);
		}
		else if (postfix[i] == '-') {
			int opr2 = MyStack.pop();
			int opr1 = MyStack.pop();
			MyStack.push(opr1 - opr2);
		}
		else if (postfix[i] == '/') {
			int opr2 = MyStack.pop();
			int opr1 = MyStack.pop();
			MyStack.push(opr1 / opr2);
		}
		else if (postfix[i] == '%') {
			int opr2 = MyStack.pop();
			int opr1 = MyStack.pop();
			MyStack.push(opr1 % opr2);
		}
	}

	cout << MyStack.pop() << endl;
}