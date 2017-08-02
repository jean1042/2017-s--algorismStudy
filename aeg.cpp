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

	for (Node *list = Head; list != NULL; list = list->link)
	{
		cout << list->score << endl;

	}

}


//리스트의 마지막에 노드 삽입하는 함수
void insert_node_at_rear(Node *new_node)
{
	if (Head == NULL)  // 빈 리스트면
		Head = new_node;


	else { // 마지막 노드를 찾자
		Node *list = Head;

		while (list->link != NULL)
			list = list->link;
		list->link = new_node;
	}

}






void main()
{
	while(1) //while(true) -> 무한루프를 의미함
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
	
	// 노드를 삭제하자
	cout << "지우려는 노드의 값을 입력하세요 : ";
	int d_value;
	cin >> d_value;

	if (Head == NULL) 
		cout << "ERROR : No Node to delete" << endl;

	
	//첫 노드가 삭제할 노드인 경우
	else if (Head->score ==d_value)
		Head=Head->link;
	

	else {
		for (Node *list = Head; list->link != NULL; list = list->link)
		{
			if (list->link->score == d_value) {

				list->link = list->link->link;
				break;
			}
				
		}
	
	
	
	
	}


	// 리스트 출력 확인
	cout << "AFTER NODE DELETION" << endl;
	printList();


}