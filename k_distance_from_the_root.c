/*
 * 		k_distance_from_the_root.c
 * 		TODO
 * 		Created on: 2:12:00 PM Jun 13, 2016
 * 		Author: Venkata 
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node* left;
   struct node* right;
};

void printKDistant(struct node *root , int k)
{
	if(root == NULL)
		return;
	if(k == 0) {
		printf("%d ", root->data);
		return;
	}
	else {
		printKDistant(root->left, k-1);
		printKDistant(root->right, k-1);
	}
}

struct node* newNode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}

int main()
{

  /* Constructed binary tree is
            1
          /   \
        2      3
      /  \    /
    4     5  8
  */
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(8);

  printKDistant(root, 2);
  //printKDistant(root, 1);
  //printKDistant(root, 0);
  return 0;
}



