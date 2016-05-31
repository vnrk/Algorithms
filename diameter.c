///*
// * 		diameter.c
// * 		TODO
// * 		Created on: 10:38:06 AM May 30, 2016
// * 		Author: Venkata
// */
//#include <stdio.h>
//#include <stdlib.h>
//
//struct node {
//	int data;
//	struct node *left;
//	struct node *right;
//};
//
//struct node* newNode(int data)
//{
//  struct node* node = (struct node*)
//                       malloc(sizeof(struct node));
//  node->data = data;
//  node->left = NULL;
//  node->right = NULL;
//
//  return(node);
//}
//int max(int a, int b) {
//	return (a>b) ? a : b;
//}
//int height(struct node *root) {
//	if(root == NULL) {
//		return 0;
//	}
//	return max(height(root->left), height(root->right)) + 1;
//}
//
//int diameter(struct node *root) {
//
//	if(root == NULL)
//		return 0;
//
//	int lh = height(root->left);
//	int rh = height(root->right);
//
//	int ld = diameter(root->left);
//	int rd = diameter(root->right);
//
//	return max(max(ld,rd), lh+rh+1);
//}
//
//int diameterOptimized(struct node *root, int *height) {
//	int lh=0,rh=0,ld=0,rd=0;
//
//	if(root == NULL){
//		*height = 0;
//		return 0;
//	}
//
//	ld = diameterOptimized(root->left, &lh);
//	rd = diameterOptimized(root->right, &rh);
//	*height = max(lh,rh) + 1;
//
//	return max(lh+rh+1, max(ld,rd));
//}
//
//int main(int argc, char **argv) {
///*	   Constructed binary tree is
//	            1
//	          /   \
//	        2      3
//	      /  \
//	    4     5
//*/
//	  struct node *root = newNode(1);
//	  root->left        = newNode(2);
//	  root->right       = newNode(3);
//	  root->left->left  = newNode(4);
//	  root->left->right = newNode(5);
//	  int height=0;
//	  printf("Diameter of the given binary tree is %d\n", diameter(root));
//	  printf("Diameter of the given binary tree is %d\n", diameterOptimized(root,&height));
//
//	  return 0;
//}
