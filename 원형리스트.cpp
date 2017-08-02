#include <iostream>
using namespace std;


class Node {
public:
	int score;
	Node *link;

};

Node *Head = NULL;


//자료를 차례대로 출력하는 함수
void printList()
{
	if (Head == NULL) return;
	else {
		Node *list = Head;
		do {
			cout << list->link->score << endl;
			list = list->link;
			}
			while (list != Head);


		}
	}



//원형리스트의 맨끝에 추가하기
void insert_node_at_rear(Node *new_node)
{
	if (Head == NULL) { // 빈 리스트면 노드 1개짜리 리스트 만들어짐
		new_node->link = new_node;
		Head = new_node;

		// 새로운 노드가 들어오면 
	}

	else { // 마지막 노드를 찾자
		new_node->link = Head->link;
		Head->link = new_node;
		Head = new_node;
	}

}






void main()
{
	while (1) //while(true) -> 무한루프를 의미함
	{
		int value;

		cout << "다음 값을 입력하세요 (끝내려면 음수를 입력하세요) : ";
		cin >> value;

		if (value < 0) break;

		Node *new_node;

		new_node = new Node;
		new_node->score = value;
		new_node->link = NULL;


		//리스트의 처음에 삽입
		insert_node_at_rear(new_node);
	}

	printList();


	////////////////////////

	// REVERSE THE LIST
	Node *p, *q, *r;
	p = Head;
	q = NULL;
	r = NULL;

	while (p != NULL) {

		r = q; //q backup
		q = p; //p backup
		p = p->link; //move to next node
		q->link = r; //reverse the node
	}
	Head = q;



	// 리스트 출력 확인
	cout << "AFTER REVERSING LIST" << endl;
	printList();


}