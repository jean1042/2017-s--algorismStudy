#include <iostream>
using namespace std;

#define NODE_NUM 7 // 노드의 개수
#define INF 9999 // 무한대

int Weight[NODE_NUM][NODE_NUM] =
{ 0, 7, INF, INF, 3, 10, INF,
7, 0, 4, 10, 2, 6, INF,
INF, 4, 0, 2, INF, INF, INF,
INF, 10, 2, 0, 11, 9, 4,
3, 2, INF, 11, 0, INF, 5,
10, 6, INF, 9, INF, 0, INF,
INF, INF, INF, 4, 5, INF, 0 };


/*S 라는 집합을 하나 생성
1. S 는 기본적으로 0으로 초기화 되어 있음,
2. 0이면 아직 공식발표 안한것@! */
bool S[NODE_NUM] = { 0 };

//최단거리를 구해서 넣을 배열
int Distance[NODE_NUM];
int Path[NODE_NUM];
//distance 가 확정되지 않은 공식발표 안한 애들 중에서 distance 값이 가장 작은최단 거리 찾음
int choose_best() {
	int Min = INF;
	int best_node;

	for (int i = 0; i < NODE_NUM; i++) {
		if (S[i] != 0) continue; //공식 발표 한 적 있으면 건너뜀

								 //공식 발표 하지 않은 노드 중에서 distance 값이 가장 작은 노드를 찾음
		if (Distance[i] < Min) {
			Min = Distance[i];
			best_node = i;
		}
	}
	return best_node;
}




void shortest_path(int v) {
	//배열 초기화
	for (int i = 0; i < NODE_NUM; i++) {
		S[i] = 0;
		Distance[i] = Weight[v][i];
		Path[i] = v; //0번에서 4번 노드로 왔다는 것을 저장
	}//모든 노드의 weight 의 값을 가짐
	
	Distance[v] = 0;
	S[v] = 1;

	/*
	1. 출발점 제외 시키고 노드가 n-1개 남았음
	2. n-2개로 루프를 돌리면 나머지 한개가 저절로 정해지기 때문에
	3. node_num-2로 루프 돌리는 것!*/

	for (int i = 0; i < NODE_NUM - 2; i++) {
		int u = choose_best(); //S[i] 노드 중 Distance[]r가 가장 적은 노드를 u 로 선택 (0이 가장 짧은 노드가 4번이었으면 u 를 4번으로 설정하는 것)

		S[u] = 1;
		for (int w = 0; w < NODE_NUM; w++) {
			if (S[w] == 0) { //4번의 노드들 중에서 아직 공식발표 하지 않은 애가 있으면
				if (Distance[w] > Distance[u] + Weight[u][w])
				{
					Distance[w] = Distance[u] + Weight[u][w]; //4번 거쳐서 온거랑 원래 바로 온 값이랑 비교했을 때 원래 값이 더 길면 거쳐서 온애를 Distance에 저장함
					Path[w] = u; //4번 노드가 더 빠른 걸 알았으면 1번 노드에 4라는 숫자를 기록함 -> 경로까지 알게 하기 위해서
				}
				}
		}



	}
}

void main() {
	shortest_path(0); //(임의) 시작점을 0번 노드로 잡음
	cout << "Distance" << endl;
	//최단 거리 출력
	for (int i = 0; i < NODE_NUM; i++) {
		cout << "0 ==> " << i << " : " << Distance[i] << endl;
	}

	cout << "Path" << endl;
	//경로 출력
	for (int i = 0; i < NODE_NUM; i++) {
		cout <<i<< ":" <<Path[i] << endl;
	}
}

