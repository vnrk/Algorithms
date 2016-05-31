/*
 * 		width.c
 * 		TODO
 * 		Created on: 1:53:20 PM May 31, 2016
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


//int getWidth(struct node* root, int level);
void getWidth(struct node* root, int *count, int level);
int height(struct node* node);
struct node* newNode(int data);

//int getWidth(struct node *root, int level)
//{
//	if(root == NULL)
//		return 0;
//	if(level == 1)
//		return 1;
//	return getWidth(root->left, level-1) + getWidth(root->right, level-1);
//}

//int getMaxWidth(struct node *root)
//{
//	int i=0, h = height(root);
//	int maxW=0,wid;
//	for(i=1; i<=h; i++){
//		wid = getWidth(root, i);
//		if(maxW < wid)
//			maxW = wid;
//	}
//	return maxW;
//}

void getWidth(struct node *root, int *count, int level)
{
	if(root) {
		count[level]++;
		getWidth(root->left,count,level+1);
		getWidth(root->right,count,level+1);
	}
}

int getMaxWidth(struct node *root)
{
	int h = height(root);
	int *count = (int *)calloc(sizeof(int), h);
	int max=0,i;
	getWidth(root,count,0);
	for(i=0; i<h; i++) {
		if(max < count[i])
			max = count[i];
	}
	return max;
}

int height(struct node* node)
{
   if (node==NULL)
     return 0;
   else
   {
     /* compute the height of each subtree */
     int lHeight = height(node->left);
     int rHeight = height(node->right);
     /* use the larger one */

     return (lHeight > rHeight)? (lHeight+1): (rHeight+1);
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
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  root->right->right = newNode(8);
  root->right->right->left  = newNode(6);
  root->right->right->right  = newNode(7);

  /*
   Constructed bunary tree is:
          1
        /  \
       2    3
     /  \     \
    4   5     8
              /  \
             6   7
  */
  printf("Maximum width is %d \n", getMaxWidth(root));
  return 0;
}


