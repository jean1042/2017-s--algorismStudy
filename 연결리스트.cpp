#include <iostream>
using namespace std;

#define NODENUM 8

class Node{
public:
	int score;
	Node *link;

};

Node *Head=NULL;


//자료를 차례대로 출력하는 함수
void printList()
{
	
	for (Node *list=Head; list != NULL ; list=list->link)
	{
		cout << list->score << endl;
		
	}

}

//리스트의 처음에 삽입하는 함수
void insert_node_at_front(Node *new_node)
{
		new_node->link=Head;
		Head= new_node;
}
//리스트의 마지막에 노드 삽입하는 함수
void insert_node_at_rear(Node *new_node)
{
	if (Head ==NULL)  // 빈 리스트면
		Head=new_node;
	
	else { // 마지막 노드를 찾자
		Node *list=Head;

		while ( list->link !=NULL)
		list=list->link;
		list->link=new_node;
		}
	
}
	





void main()
{
	//8개 자료를 연결리스트로 구성
	for (int i=0; i<NODENUM ; i++)
	{
		Node *new_node;

		new_node =new Node;
		cout << "다음 값을 입력하세요 : ";
		cin >> new_node-> score;
		new_node->link=NULL;

		//리스트의 처음에 삽입
		insert_node_at_front(new_node);
	}

	printList();
	
	
}