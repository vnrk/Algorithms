/* C program to merge two sorted linked lists */
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/* Link list node */
struct node
{
   int data;
   struct node* next;
};

void push(struct node** head_ref, int new_data)
{
   struct node* new_node =
       (struct node*) malloc(sizeof(struct node));
   new_node->data  = new_data;
   new_node->next = (*head_ref);
   (*head_ref)    = new_node;
}

/* Function to print nodes in a given linked list */
void printList(struct node *node)
{
   while (node!=NULL)
   {
       printf("%d ", node->data);
       node = node->next;
   }
}

struct node* mergeList(struct node* a, struct node* b){
	struct node dummy;
	struct node* tail = &dummy;
	while(true){
		if(a == NULL){
			tail->next = b;
			break;
		}
			if(b == NULL){
			tail->next = a;
			break;
		}
		if(a->info <= b->info){
			tail->next = a;
			tail = tail->next;
			a = a->next;
		}else{
			tail->next = b;
			tail = tail->next;
			b = b->next;
		}
	}
	return dummy.next;
}

struct node * SortedMerge(struct node *a, struct node *b)
{
	struct node *result = NULL;
	if(a == NULL)
		return b;
	if(b == NULL)
		return a;
	if(a->data <= b->data) {
		result = a;
		result->next = SortedMerge(a->next, b);
	}
	else {
		result = b;
		result->next = SortedMerge(a, b->next);
	}
	return result;
}

/* Drier program to test above functions*/
int main()
{
   struct node* res = NULL;
   struct node* a = NULL;
   struct node* b = NULL;

   /* Let us create two sorted linked lists to test
     the functions
      Created lists, a: 5->10->15,  b: 2->3->20 */
   push(&a, 15);
   push(&a, 10);
   push(&a, 5);

   push(&b, 20);
   push(&b, 3);
   push(&b, 2);

   //res = SortedMerge(a, b);
   res = mergeList(a, b);

   printf("Merged Linked List is: \n");
   printList(res);

   return 0;
}
