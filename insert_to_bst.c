/*
 * 		insert_to_bst.c
 * 		TODO
 * 		Created on: 9:16:19 PM Jun 12, 2016
 * 		Author: Venkata 
 */

struct node * insert(struct node *root, int key)
{
	if(root == NULL)
		return newNode(key);
	if(key < node->key)
		insert(root->left, key);
	else
		insert(root->right, key);

	return root;
}


