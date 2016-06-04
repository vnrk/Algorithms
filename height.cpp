/*
 * 		height.c
 * 		TODO
 * 		Created on: 12:09:59 PM May 30, 2016
 * 		Author: Venkata
 */
#include <iostream>
#include <queue>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

int treeHeight(struct node *root){
	if(root == NULL)
		return 0;
	struct node *temp;
	queue<node *> q;
	q.push(root);
	int height=0,nodeCount=0;
	while(1) {
		nodeCount = q.size();
		if(nodeCount == 0)
			return height;
		height++;
		while(nodeCount > 0){
			temp = q.front();
			q.pop();
			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);
			nodeCount--;
		}
	}
}

// Utility function to create a new tree node
node* newNode(int data)
{
    node *temp = new node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// Driver program to test above functions
int main()
{
    // Let us create binary tree shown in above diagram
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Height of tree is " << treeHeight(root);
    return 0;
}

