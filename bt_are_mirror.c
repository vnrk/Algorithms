/*
 * 		bt_are_mirror.c
 * 		TODO
 * 		Created on: 11:34:16 AM May 19, 2015
 * 		Author: Venkata 
 */

int are_mirror(struct node *tree1, struct node *tree2) {
	if(tree1 == NULL && tree2 == NULL)
		return 1;
	if(tree1 != NULL && tree2 != NULL) {
		int left = are_mirror(tree1->left, tree2->right);
		int right = are_mirror(tree1->right, tree2->left);
		return (tree1->data && tree2->data && left && right);
	}
	return 0;
}

//the other similar way of doing this
int are_mirror(struct node *tree1, struct node *tree2) {
	if(tree1 == NULL && tree2 == NULL)
		return 1;
	if(tree1 == NULL || tree2 == NULL)
		return 0;
	if(tree1->data != tree2->data)
		return 0;
	else {
		int left = are_mirror(tree1->left, tree2->right);
		int right = are_mirror(tree1->right, tree2->left);
		return (left && right);
	}
}
