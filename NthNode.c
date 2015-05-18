/*

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

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


int GetNth(struct node* head, int index)
{
    struct node* current = head;
    int count = 0;
//    while (current != NULL)
//    {
//       if (count == index)
//          return(current->data);
//       count++;
//       current = current->next;
//    }
    for(count=0; current != NULL && count < index; current = current->next, count++) {
    if(count == index)
    	return current->data;
    }
	printf("Not present\n");
    assert(0);
}


int _nthnode()
{
    struct node* head = NULL;
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
    printf("Element at index 10 is %d", GetNth(head, 6));
    return 0;
}
*/
