/* C/C++ program to merge two sorted linked lists */
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/* Link list node */
struct Node
{
	int data;
	struct Node* next;
};

/* Function to insert a node at the beginging of the
linked list */
void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node =
		(struct Node*) malloc(sizeof(struct Node));

	/* put in the data  */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}

struct Node* mergeList(struct Node* a, struct Node* b) {
	printf("mergelist\n");
	struct Node dummy;
	struct Node* tail = &dummy;
	while (true) {
		if (a == NULL) {
			tail->next = b;
			break;
		}
		if (b == NULL) {
			tail->next = a;
			break;
		}
		if (a->data <= b->data) {
			tail->next = a;
			tail = tail->next;
			a = a->next;
		}
		else {
			tail->next = b;
			tail = tail->next;
			b = b->next;
		}
	}
	return dummy.next;
}

struct Node* SortedMerge(struct Node* a, struct Node* b)
{
	struct Node* result = NULL;

	/* Base cases */
	if (a == NULL)
		return(b);
	else if (b == NULL)
		return(a);

	/* Pick either a or b, and recur */
	if (a->data <= b->data)
	{
		result = a;
		result->next = SortedMerge(a->next, b);
	}
	else
	{
		result = b;
		result->next = SortedMerge(a, b->next);
	}
	return(result);
}
/* Drier program to test above functions*/
int main()
{
	/* Start with the empty list */
	struct Node* res = NULL;
	struct Node* a = NULL;
	struct Node* b = NULL;

	/* Let us create two sorted linked lists to test
	the functions
	Created lists, a: 5->10->15,  b: 2->3->20 */
	push(&a, 15);
	push(&a, 10);
	push(&a, 5);

	push(&b, 20);
	push(&b, 3);
	push(&b, 2);

	/* Remove duplicates from linked list */
	//res = mergeList(a, b);
	res = SortedMerge(a, b);

	printf("Merged Linked List is: \n");
	printList(res);

	return 0;
}