#include <iostream>
using namespace std;


typedef int element;
class QNode {
public:
	element data;
	QNode *link;
};
class queue_class{
public:
	QNode * front, * rear; //queue pointer


	queue_class() { // 생성자 함수
		front = rear = NULL;
	}

	//QUE가 비어있는지 
	bool is_empty() {
		return (front == NULL);
	}

	//que에 새로운 DATA 집어넣을 때
	void enQueue(element xdata) {
		QNode *new_node = new QNode;
		new_node->data = xdata;
		new_node->link = NULL; 
		
		if (rear == NULL) { //list 가 isempty
			front = rear = new_node;
		}
		else {
			rear->link = new_node;
			rear = new_node; // rear는 마지막 node 를 가리켜야 하니깐@!
		}
	}

	element deQueue() {
		if (is_empty()) {
			cout << "ERROR : STACK EMPTY" << endl;
			exit; //return;
		}
		else {
			element x = front->data;
			front = front->link;
			if(front==NULL)//FRONT를 바꿨더니 NULL-> 원래 원소가 하나였다는 뜻, 그걸 지우는거야
			{
				rear = NULL;
			}
			return x;
		}
	}

	void printQueue() {
		for (QNode *ptr = front; ptr!= NULL; ptr = ptr->link)
			cout << ptr->data << " "; //연결리스트 따라가며 출력
	}
};


void main()
{
	queue_class MyQueue;
	MyQueue.enQueue(10);
	MyQueue.enQueue(20);
	MyQueue.enQueue(30);
	MyQueue.enQueue(40);

	MyQueue.printQueue();

	MyQueue.deQueue();
	MyQueue.deQueue();

	cout << endl;

	MyQueue.printQueue();
}
