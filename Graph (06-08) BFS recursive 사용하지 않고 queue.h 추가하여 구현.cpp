/*
recursive 사용하지 않으려면
헤더파일 추가하고 수정
*/

//BFS 구현 
#include <iostream>
#include <string> 

using namespace std;

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

bool visited[NODE_NUM] = {}; // 방문했느냐 안했느냐를 확인하는 노드/ 모든값을 0으로둔다/ {0}여도 같은 말!!

void print_node(int v)
{
	cout << name[v] << endl;
}

#include "Queue.h"

QUEUE MyQueue;

void BFS(int v) {

	MyQueue.enQueue(v);

	while (!MyQueue.is_empty()) {
		v = MyQueue.deQueue();

		if (visited[v] != 0)continue;
		else visited[v] = 1;

		print_node(v);

		for (int i = 0; i <= NODE_NUM; i++)
		{
			if (adj[v][i] == 0) continue; //에지가 없으면 건너뛰어라
			if (visited[i] != 0) continue;
			MyQueue.enQueue(i);
		}
	}

}

void main()
{
	BFS(0);
}