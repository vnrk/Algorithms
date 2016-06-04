/*
* 		Stack_Reverse_Recursive.c
* 		Reversing a stack without using recursion
* 		Created on: 6:29:41 PM May 7, 2014
* 		Author: Venkata
*/

void insertAtBottom(struct sNode** top_ref, int item)
{
	int temp;
	if(isEmpty(*top_ref))
	{
		push(top_ref, item);
	}
	else
	{
		//here is the trick : popped element is in temp
		//and the element to be inserted sent by reverse()
		//is in item, once the item is pushed in then temp is pushed
		temp = pop(top_ref);
		insertAtBottom(top_ref, item);
		push(top_ref, temp);
	}
}


void reverse(struct sNode** top_ref)
{
	int temp;
	if(!isEmpty(*top_ref))
	{
		temp = pop(top_ref);
		reverse(top_ref);
		insertAtBottom(top_ref, temp);
	}
}

// structure of a stack node
struct sNode
{
	char data;
	struct sNode *next;
};

// Function Prototypes
void push(struct sNode** top_ref, int new_data);
int pop(struct sNode** top_ref);
int isEmpty(struct sNode* top);
void print(struct sNode* top);

// Driveer program to test above functions
void _stack_reverse_recursive()
{
	struct sNode *s = '\0';
	push(&s, 4);
	push(&s, 3);
	push(&s, 2);
	push(&s, 1);

	printf("\n Original Stack ");
	print(s);
	reverse(&s);
	printf("\n Reversed Stack ");
	print(s);
}

// Function to check if the stack is empty
int isEmpty(struct sNode* top)
{
	return (top == '\0')? 1 : 0;
}

// Function to push an item to stack
void push(struct sNode** top_ref, int new_data)
{
	// allocate node
	struct sNode* new_node =
	(struct sNode*) malloc(sizeof(struct sNode));

	if(new_node == '\0')
	{
		printf("Stack overflow \n");
		getchar();
		exit(0);
	}

	// put in the data
	new_node->data  = new_data;

	// link the old list off the new node
	new_node->next = (*top_ref);

	// move the head to point to the new node
	(*top_ref)    = new_node;
}

// Function to pop an item from stack
int pop(struct sNode** top_ref)
{
	char res;
	struct sNode *top;

	//If stack is empty then error
	if(*top_ref == '\0')
	{
		printf("Stack overflow \n");
		getchar();
		exit(0);
	}
	else
	{
		top = *top_ref;
		res = top->data;
		*top_ref = top->next;
		free(top);
		return res;
	}
}

 Functrion to pront a linked list
void print(struct sNode* top)
{
	printf("\n");
	while(top != '\0')
	{
		printf(" %d ", top->data);
		top =  top->next;
	}
}


