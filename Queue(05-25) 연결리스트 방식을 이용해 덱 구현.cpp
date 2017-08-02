#include <iostream>
using namespace std;


typedef int element;
class QNode {
public:
	element data;
	QNode *llink;
	QNode *rlink;
};

class queue_class {
public:
	QNode * front, *rear; //queue pointer


	queue_class() { // 생성자 함수
		front = rear = NULL;
	}

	//QUE가 비어있는지 
	bool is_empty() {
		return (front == NULL);
	}

	//rear에 새로운 DATA 집어넣을 때
	void enQueueRear(element xdata) {

		QNode *new_node = new QNode;
		new_node->data = xdata;
		new_node->llink = new_node->rlink = NULL;

		if (/*rear == NULL*/ is_empty()) { //빈 리스트인 경우 front와 rear 둘다 new node 를 가리키게 바꿔야 함

			front = rear = new_node;
		}
		
		else {
			new_node->llink = rear;
			rear->rlink = new_node;
			rear = new_node;
		}
	}

	//front 에 새로운 DATA 집어넣을 때
	void enQueueFront(element xdata) {

		QNode *new_node = new QNode;
		new_node->data = xdata;
		new_node->llink = new_node->rlink = NULL;

		if (/*rear == NULL*/ is_empty()) //빈 리스트인 경우 front와 rear 둘다 new node 를 가리키게 바꿔야 함
		{
			front = rear = new_node;
		}
		else {
			new_node->rlink =front;
			front->llink = new_node;
			front = new_node;

		}
	}
		
		/*
		if (rear == NULL) { //list 가 isempty
		front = rear = new_node;
		}
		else {
		rear->link = new_node;
		rear = new_node; // rear는 마지막 node 를 가리켜야 하니깐@!
		}
		}
		*/
		

	element deQueueFront() {
		if (is_empty()) {
			cout << "ERROR : STACK EMPTY" << endl;
			exit; //return;
		}
		else {
			element x = front->data;
			front = front->rlink;
		
			if (front == NULL) { //두번째 노드가 없는 경우(유일한 노드를 지우는 경우)
				front = rear = NULL;
			}

			else {
				front->llink = NULL;
			}

			/*
			if (front == NULL)//FRONT를 바꿨더니 NULL-> 원래 원소가 하나였다는 뜻, 그걸 지우는거야
				rear = NULL;
			*/
			return x;
		}
	}

	element deQueueRear() {
		if (is_empty()) {
			cout << "ERROR : STACK EMPTY" << endl;
			exit; //return;
		}
		else {
			element x = rear->data;
			rear = rear->llink;

			if (rear == NULL) { //두번째 노드가 없는 경우(유일한 노드를 지우는 경우)
				front = rear = NULL;
			}

			else {
				rear->rlink = NULL;
			}

			/*
			if (front == NULL)//FRONT를 바꿨더니 NULL-> 원래 원소가 하나였다는 뜻, 그걸 지우는거야
			rear = NULL;
			*/
			return x;
		}
	}



	void printQueue() {
		for (QNode *ptr = front; ptr != NULL; ptr = ptr->rlink)
			cout << ptr->data << " "; //연결리스트 따라가며 출력
	}
};


void main()
{
	queue_class MyQueue;
	MyQueue.enQueueRear(10);
	MyQueue.enQueueFront(20);
	MyQueue.enQueueFront(30);
	MyQueue.enQueueRear(40);

	MyQueue.printQueue();

	MyQueue.deQueueFront();
	MyQueue.deQueueRear();

	cout << endl;

	MyQueue.printQueue();
}
