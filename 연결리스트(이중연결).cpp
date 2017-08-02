#include <iostream>
using namespace std;

class Node {
public:
	int score;
	Node *link;
};

//head 포인터 null로
Node *Head = NULL; 

void printList()
{
	// 자료를 차례대로 출력

	//원형 리스트 -> list가 NULL이 나올 수 x
	if (Head == NULL) return;
	else {
		Node *list = Head;
		do {
			cout << list->link->score << endl;
			list = list->link;
		} while (list != Head);
	}
}

//노드 뒤 삽입
void insert_node_at_rear(Node *new_node)
{
	if (Head == NULL) { //빈리스트면
		new_node->link = new_node;
		Head = new_node;
	}

	else
	{
		new_node->link = Head->link;
		Head->link = new_node;
		Head = new_node; //head는 항상 마지막 노드를 가리킴
	}
}

void main()
{
	while (1) // while(true)
	{
		int value;

		cout << "다음 값을 입력하세요 (끝내려면 음수를 입력하세요) : ";
		cin >> value;

		if (value < 0) break;

		Node *new_node;

		new_node = new Node;
		new_node->score = value;
		new_node->link = NULL;

		// 리스트의 뒤에 삽입
		insert_node_at_rear(new_node);
	}

	printList();

	// 노드 삭제하기!
	// 지우려는 노드의 앞노드가 갖는 값을 입력받음
	int value;
	cout << "지우려는 노드의 앞 노드가 갖는 값? ";
	cin >> value;

	Node *pre = NULL;
	Node *list = Head;
	do {
		list = list->link;
		if (list->score == value) {
			pre = list;
			break;
		}
	} while (list != Head);

	if (pre != NULL) {
		if (Head == pre->link) Head = pre;
		pre->link = pre->link->link; // pre의 다음 노드를 건너뜀, 즉 삭제
	}

	cout << "AFTER DELETION" << endl;
	printList();
}