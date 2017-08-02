#include <iostream>
using namespace std;
#define MAX_QUE_SIZE 100

typedef int element;
class queue_class {
public:
	element myqueue[MAX_QUE_SIZE];//배열방식으로 구현

	int front, rear; // Queue pointer

	queue_class() { // 생성자 함수
		front = -1;
		rear = -1;
	}

	//QUE가 비어있는지 
	bool is_empty() {
		return (front == rear);
	}

	bool is_full() {

		return (rear == (MAX_QUE_SIZE - 1));
	}

	void enQueue(element data) {
		if (is_full()) {
			cout << "ERROR : QUEUE	FULL" << endl;
			return; // exit();
		}
		else {
			myqueue[++rear] = data;
			//rear++;
			//myqueue[rear] = data;
		}
	}

	element deQueue() {
		if (is_empty()) {
			cout << "ERROR : STACK EMPTY" << endl;
			exit; //return;
		}
		else {
			//int x = mystack[top];
			//top--;
			//return (x);
			return myqueue[++front]; //front 먼저 증가시키고 그 증가시킨 값의 que 값을 반환
		}
	}

	void printQueue() {
		for (int i = front + 1; i <= rear; i++)
			cout << myqueue[i] << " ";
	}
};
