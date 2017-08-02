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
//후위 순회
void postorder(TreeNode *root) {
	if (root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	if(root->data>=0 && root->data <=9)cout << root->data << ' ';
	else cout << (char)root->data;


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

	postorder(root);
	cout << endl;

}