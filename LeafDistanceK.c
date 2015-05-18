/* A binary tree node has data, pointer to left child
   and a pointer to right child */

#define MAX_HEIGHT 10000

struct Node
{
    int key;
    struct Node *left, *right;
};

/* utility that allocates a new Node with the given key  */
struct Node* newNode(int key)
{
	struct Node* node = (struct Node *)malloc(sizeof(struct Node));
    node->key = key;
    node->left = node->right = "\0";
    return (node);
}

/* This function prints all nodes that are distance k from a leaf node
   path[] --> Store ancestors of a node
   visited[] --> Stores true if a node is printed as output.  A node may be k
                 distance away from many leaves, we want to print it once */
void kDistantFromLeafUtil(struct Node* node, int path[], int visited[],
                          int pathLen, int k)
{
    // Base case
    if (node=="\0") return;

    /* append this Node to the path array */
    path[pathLen] = node->key;
    visited[pathLen] = 0;
    //pathLen needs to be incremented
    pathLen++;

    /* it's a leaf, so print the ancestor at distance k only
       if the ancestor is not already printed  */
    if (node->left == "\0" && node->right == "\0" &&
        pathLen-k-1 >= 0 && visited[pathLen-k-1] == 0)
    {
        printf("%d ", path[pathLen-k-1]);
        visited[pathLen-k-1] = 1;
        return;
    }

    /* If not leaf node, recur for left and right subtrees */
    kDistantFromLeafUtil(node->left, path, visited, pathLen, k);
    kDistantFromLeafUtil(node->right, path, visited, pathLen, k);
}

/* Given a binary tree and a number k, print all nodes that are k
   distant from a leaf*/
void printKDistantfromLeaf(struct Node* node, int k)
{
    int path[MAX_HEIGHT];
    int visited[MAX_HEIGHT] = {0};
    kDistantFromLeafUtil(node, path, visited, 0, k);
}

/* Driver program to test above functions*/
void _leafdistancek()
{
    // Let us create binary tree given in the above example
    struct Node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);

    printf("Nodes at distance 1 are: ");
    printKDistantfromLeaf(root, 1);
}
