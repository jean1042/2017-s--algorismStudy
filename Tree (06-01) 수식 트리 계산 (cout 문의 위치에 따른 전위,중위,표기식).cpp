#include <iostream>
using namespace std;

typedef int element;
class TreeNode {
public:
	element data;
	TreeNode *left, *right;

	//생성자 함수
	TreeNode(int x) {
		data = x;
		left = right = NULL;

	}
};

//계산하는 알고리즘
element evaluate(TreeNode *root) {
	if (root == NULL) return 0;
	else if (root->left == NULL && root->right == NULL) //단말노드면
		return root->data;
	else {
		int left_value = evaluate(root->left);
		int right_value = evaluate(root->right);

		if (root->data == '*') return left_value * right_value;
		if (root->data == '+') return left_value + right_value;
		if (root->data == '-') return left_value - right_value;
		if (root->data == '/') return left_value / right_value;


	}



//	evaluate(root->left);
	//이 자리에 cout 문이 위치하면 중위표기식
	
	//evaluate(root->right);
	//이 자리에 cout 문이 위치하면 후위표기식


}
void main() {
	//트리 내용을 입력 받아 해당 트리를 생성
	TreeNode *n1 = new TreeNode(3);
	TreeNode *n2 = new TreeNode(2);
	TreeNode *n3 = new TreeNode('*');
	TreeNode *n4 = new TreeNode(5);
	TreeNode *n5 = new TreeNode(6);
	TreeNode *n6 = new TreeNode('*');
	TreeNode *root = new TreeNode('+');


	n3->left = n1;
	n3->right = n2;
	n6->left = n4;
	n6->right = n5;
	root->left = n3;
	root->right = n6;

	cout << evaluate(root);
	cout << endl;

}