/*recursive 쓰지 않고 DFS 구현하기 
1. stack.h 추가하기 
2. 본문 내용 수정
*/

#include <iostream>
#include <string>


using namespace std;
int element;

#define NODE_NUM 8 // 노드의 개수

int adj[NODE_NUM][NODE_NUM] = //인접행렬 
{ 0, 1, 1, 0, 0, 0, 0, 0,
  1, 0, 0, 1, 1, 0, 0, 0,
  1, 0, 0, 0, 0, 1, 1, 0,
  0, 1, 0, 0, 0, 0, 0, 1,
  0, 1, 0, 0, 0, 0, 0, 1,
  0, 0, 1, 0, 0, 0, 0, 1,
  0, 0, 1, 0, 0, 0, 0, 1,
  0, 0, 0, 1, 1, 1, 1, 0 };

string name[NODE_NUM] = { "v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8" };

bool visited[NODE_NUM] = { 0 };//초기화를 꼭 시켜야함 -> 모든 것을 0으로 초기화

#include "Stack.h"
STACK MyStack;

void print_node(int v)
{
	cout << name[v] << endl;
}




void DFS(int v) {
	MyStack.push(v);

	while (!MyStack.is_empty()) {
		v = MyStack.pop();

		if (visited[v] != 0) continue;
		else visited[v] = 1;

		print_node(v);

		for (int i = 0; i < NODE_NUM; i++)
		{
			if (adj[v][i] == 0) continue;
			if (visited[i] != 0) continue;
			MyStack.push(i);
		}
	}



void main()
{
	DFS(0);
}