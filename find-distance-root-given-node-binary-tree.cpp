#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

Node *newNode(int item)
{
	Node *temp = new Node;
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

int findDistance(Node *root, int x)
{
	if (!root)
		return 0;
	int distance = -1;
	if (root->data == x || (distance = findDistance(root->left, x)) >= 0 || (distance = findDistance(root->right, x)) >= 0)
		return distance + 1;
}

int main()
{
	Node *root = newNode(5);
	root->left = newNode(10);
	root->right = newNode(15);
	root->left->left = newNode(20);
	root->left->right = newNode(25);
	root->left->right->right = newNode(45);
	root->right->left = newNode(30);
	root->right->right = newNode(35);

	cout << findDistance(root, 45);
	return 0;
}