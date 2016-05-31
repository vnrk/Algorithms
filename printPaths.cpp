///*
// * 		printPaths.c
// * 		TODO
// * 		Created on: 4:40:14 PM May 30, 2016
// * 		Author: Venkata
// */
//#include <cstdio>
//#include <iostream>
//using namespace std;
//
//struct node {
//	int data;
//	struct node *left;
//	struct node *right;
//};
//
//node* newnode(int data)
//{
//    node *temp = new node;
//    temp->data = data;
//    temp->left = NULL;
//    temp->right = NULL;
//    return temp;
//}
//void print(int path[], int pathlen) {
//	for(int i=0; i<pathlen; i++)
//		printf("%d ", path[i]);
//	printf("\n");
//}
//
//void printPaths(struct node *root, int path[], int pathLen) {
//	if(root == NULL)
//		return;
//	path[pathLen++] = root->data;
//	if(root->left == NULL && root->right == NULL) {
//		print(path,pathLen);
//	}
//	else {
//		printPaths(root->left, path, pathLen);
//		printPaths(root->right, path, pathLen);
//	}
//}
//
//int main(int argc, char **argv) {
//	 /* Constructed binary tree is
//	            10
//	          /   \
//	        8      2
//	      /  \    /
//	    3     5  2
//	  */
//	  struct node *root = newnode(10);
//	  root->left        = newnode(8);
//	  root->right       = newnode(2);
//	  root->left->left  = newnode(3);
//	  root->left->right = newnode(5);
//	  root->right->left = newnode(2);
//	  int path[100];
//	  printPaths(root,path,0);
//	  return 0;
//}
//
//
//
//
