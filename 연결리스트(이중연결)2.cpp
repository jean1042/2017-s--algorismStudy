#include <iostream>
using namespace std;


// double likned list
class Node {
public:
	int score;
	Node *llink;
	Node *rlink;
};

Node *Head = NULL; 

void printList()
{
	// 자료를 차례대로 출력
	for (Node *list = Head->rlink; list != Head; list = list->rlink)
		cout << list->score << endl;
}

void printListReverse()
{
	// 자료를 역순으로 출력
	for (Node *list = Head->llink; list != Head; list = list->llink)
		cout << list->score << endl;
}

void insert_node_at_rear(Node *new_node)
{
	new_node->rlink = Head;
	new_node->llink = Head->llink;
	Head->llink->rlink = new_node;
	Head->llink = new_node;
}

void deleteNode(Node *removed)
{
	removed->llink->rlink = removed->rlink;
	removed->rlink->llink = removed->llink;
}

void main()
{
	// 헤드노드 생성
	Head = new Node;
	Head->rlink = Head;
	Head->llink = Head;


	while (1) // while(true)
	{
		int value;

		cout << "다음 값을 입력하세요 (끝내려면 음수를 입력하세요) : ";
		cin >> value;

		if (value < 0) break;

		Node *new_node;

		new_node = new Node;
		new_node->score = value;
		new_node->llink = NULL;
		new_node->rlink = NULL;

		// 리스트의 마지막에 삽입
		insert_node_at_rear(new_node);
	}

	cout << "순방향" << endl;
	printList();
	cout << "역순" << endl;
	printListReverse();

	// 노드 삭제하기!
	int value;
	cout << "지우려는 노드의 값은?";
	cin >> value;

	for (Node *list = Head->rlink; list != Head; list = list->rlink)
	{
		if (list->score == value) {
			deleteNode(list);
		}
	}


	cout << "AFTER DELETION" << endl;
	cout << "순방향" << endl;
	printList();
	cout << "역순" << endl;
	printListReverse();
}