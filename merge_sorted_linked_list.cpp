#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

struct Node
{
	int data;
	struct Node* next;
};

void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node =
		(struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}

struct Node* mergeList(struct Node* a, struct Node* b) {
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
	if (a == NULL)
		return(b);
	else if (b == NULL)
		return(a);
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

int main()
{
	struct Node* res = NULL;
	struct Node* a = NULL;
	struct Node* b = NULL;
	push(&a, 15);
	push(&a, 10);
	push(&a, 5);

	push(&b, 20);
	push(&b, 3);
	push(&b, 2);

	res = SortedMerge(a, b);

	printf("Merged Linked List is: \n");
	printList(res);

	return 0;
}