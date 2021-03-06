struct Node *LCA(struct Node *a, struct Node *b, struct Node *root)
{
	if (!root)
		return NULL;

	if (a == root || b == root)
		return root;

	struct Node *temp = NULL;
	int count = 0;
	for (int i = 0; i<N; i++)
	{
		struct Node *res = LCA(a, b, root->child[i]);
		if (res != NULL) {
			count++;
			temp = res;
		}
	}
	if (count == 2)
		return root;
	return temp;
}