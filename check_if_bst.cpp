//bool isBST(struct node *root) {
//	if (node == NULL)
//		return true;
//	if (node->left != NULL && max(root->left) > root->data)
//		return false;
//	if (node->right != NULL && min(root->right) > root->data)
//		return false;
//	if (!isBST(root->left) && !isBST(root->right))
//		return false;
//	return true;
//
//}

//bool isBST(struct node *root, int min = INIT_MIN, int max = INIT_MAX) {
//	if (root == NULL)
//		return true;
//	if (root->data < min || root->data > max)
//		return false;
//	return isBST(root->left, min, root->data - 1) && return isBST(root->right, root->data + 1, max);
//}

//bool isBST(struct node *root) {
//	static struct node *previous;
//	if (root) {
//		if (!isBST(root->left))
//			return false;
//		if (previous != NULL && previous->data > root->data)
//			return false;
//		previous = root;
//		return (isBST(root->right));
//	}
//	return true;
//}