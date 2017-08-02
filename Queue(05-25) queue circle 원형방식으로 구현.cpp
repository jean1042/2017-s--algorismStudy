#include <iostream>
using namespace std;
#define MAX_QUE_SIZE 8 //que size 8개로 변경(작게)

typedef int element;
class C_Queue {
public:
	element myqueue[MAX_QUE_SIZE]; //배열방식으로 구현

	int front, rear; // Queue pointer

	C_Queue() { // 생성자 함수
		front = rear = 0;
	}

	//QUE가 비어있는지 
	bool is_empty() {
		return (front == rear);
	}

	bool is_full() {

		return (front == (rear + 1) % (MAX_QUE_SIZE));
	}

	void enQueue(element data) {
		if (is_full()) {
			cout << "ERROR : QUEUE	FULL" << endl;
			return; // exit();
		}
		else {
			//myqueue[++rear] = data;
			rear = (rear + 1) % (MAX_QUE_SIZE); //증가시킨 후에 반드시 나머지연산
			myqueue[rear] = data;
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
			front = (front + 1) % MAX_QUE_SIZE;
			return myqueue[front];
			//return myqueue[++front]; //front 먼저 증가시키고 그 증가시킨 값의 que 값을 반환
		}
	}

	void printQueue()
	{

		if (front <= rear) {
			for (int i = front + 1; i <= rear; i++)
				cout << myqueue[i] << endl;
		}
		else { //순서가 뒤바뀐 경우에 ex front=5 rear=1
			for (int i = front + 1; i <= rear + MAX_QUE_SIZE; i++)
				cout << myqueue[i%MAX_QUE_SIZE] << endl;
	}
	cout << "FRONT : " << front << endl;
	cout << "REAR : " << rear << endl;
}
	
};


void main()
{
	C_Queue MyQueue;
	MyQueue.enQueue(10);
	MyQueue.enQueue(20);
	MyQueue.enQueue(30);
	MyQueue.enQueue(40);
	MyQueue.enQueue(50);

	MyQueue.deQueue();
	MyQueue.deQueue();
	MyQueue.deQueue();
	MyQueue.deQueue();

	MyQueue.enQueue(60);
	MyQueue.enQueue(70);
	MyQueue.enQueue(80);
	MyQueue.enQueue(90);

	

	MyQueue.printQueue();

	cout << endl;
}