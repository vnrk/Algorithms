/*
 * 		bt_identical.c
 * 		TODO
 * 		Created on: 11:07:31 AM May 19, 2015
 * 		Author: Venkata
 */

//takes 2 trees and checks if they are identical

int identical(struct node *tree1, struct node *tree2) {
	if(tree1 == NULL && tree2 == NULL)
		return 1;
	if(tree1 != NULL && tree2 != NULL) {
		int left = identical(tree1->left, tree2->left);
		int right = identical(tree1->right, tree2->right);
		return (tree1->data == tree2->data &&  left && right);
	}
	return 0;
}
