/*

 * 		Trie.c
 * 		TODO
 * 		Created on: 8:28:17 PM Aug 21, 2014
 * 		Author: Venkata
*/

#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])

// Alphabet size (# of symbols)
#define ALPHABET_SIZE (26)
// Converts key current character into index
// use only 'a' through 'z' and lower case
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
#define NULL 0
#define true 1
#define false 0
#define bool int

struct trie_node
{
    int value;
    struct trie_node* children[ALPHABET_SIZE];
};


struct trie
{
    struct trie_node *root;
    int count;
};

// Returns new trie node (initialized to NULLs)
struct trie_node* getNode(void)
{
    struct trie_node *pNode = NULL;

    pNode = (struct trie_node *)malloc(sizeof(struct trie_node));

    if( pNode )
    {
        int i;

        pNode->value = 0;

        for(i = 0; i < ALPHABET_SIZE; i++)
        {
            pNode->children[i] = NULL;
        }
    }

    return pNode;
}

// Initializes trie (root is dummy node)
void initialize(struct trie *pTrie)
{
    pTrie->root = getNode();
    pTrie->count = 0;
}

// If not present, inserts key into trie
// If the key is prefix of trie node, just marks leaf node
void insert(struct trie *pTrie, char key[])
{
    int level;
    int length = strlen(key);
    int index;
    struct trie_node *crawl;

    pTrie->count++;

    crawl = pTrie->root;

    for( level = 0; level < length; level++ )
    {
        index = CHAR_TO_INDEX(key[level]);
        if( !crawl->children[index] )
        {
            crawl->children[index] = getNode();
        }

        crawl = crawl->children[index];
    }

    // mark last node as leaf
    crawl->value = pTrie->count;
}

// Returns non zero, if key presents in trie
int search(struct trie *pTrie, char key[])
{
    int level;
    int length = strlen(key);
    int index;
    struct trie_node *crawl;

    crawl = pTrie->root;

    for( level = 0; level < length; level++ )
    {
        index = CHAR_TO_INDEX(key[level]);
        if( !crawl->children[index] )
        {
            return 0;
        }
        crawl = crawl->children[index];
    }

    return (crawl != 0 && crawl->value);
}

int leafNode(struct trie_node *pNode)
{
    return (pNode->value != 0);
}

int isItFreeNode(struct trie_node *pNode)
{
    int i;
    for(i = 0; i < ALPHABET_SIZE; i++)
    {
        if( pNode->children[i] )
            return 0;
    }

    return 1;
}

bool deleteHelper(struct trie_node *pNode, char key[], int level, int len)
{
    if( pNode )
    {
        // Base case
        if( level == len )
        {
            if( pNode->value )
            {
                // Unmark leaf node
                pNode->value = 0;

                // If empty, node to be deleted
                if( isItFreeNode(pNode) )
                {
                    return true;
                }

                return false;
            }
        }
        else // Recursive case
        {
            int index = CHAR_TO_INDEX(key[level]);

            if( deleteHelper(pNode->children[index], key, level+1, len) )
            {
                // last node marked, delete it
                free (pNode->children[index]);

                // recursively climb up, and delete eligible nodes
                return ( !leafNode(pNode) && isItFreeNode(pNode) );
            }
        }
    }

    return false;
}

void deleteKey(struct trie *pTrie, char key[])
{
    int len = strlen(key);

    if( len > 0 )
    {
        deleteHelper(pTrie->root, key, 0, len);
    }
}

// Driver
void _trie()
{
    // Input keys (use only 'a' through 'z' and lower case)
    char keys[][9] = {"the", "a", "there", "answer", "any", "by", "bye", "their", "kajasdas"};
    struct trie *trie;

    char output[][32] = {"Not present in trie", "Present in trie"};

    initialize(&trie);

    // Construct trie
    int i;
    for(i = 0; i < ARRAY_SIZE(keys); i++)
    {
        insert(&trie, keys[i]);
    }
    deleteKey(&trie, keys[2]);
    // Search for different keys
    printf("%s --- %s\n", "the", output[search(&trie, "the")] );
    printf("%s --- %s\n", "these", output[search(&trie, "these")] );
    printf("%s --- %s\n", "their", output[search(&trie, "their")] );
    printf("%s --- %s\n", "kajasdas", output[search(&trie, "kajasdas")] );

}

