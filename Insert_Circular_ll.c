/*

 * 		Insert_Circular_ll.c
 * 		TODO
 * 		Created on: 11:57:27 AM May 8, 2014
 * 		Author: Venkata 
*/

struct node {
	int data;
	struct node *link;
};

insert_circular_ll(struct node **head, struct node *temp)
{
	if(*head == '\0') {
		*head = &temp;
		temp->link = temp;
		return;
	}
	struct node *lptr;
	for(lptr=(*head)->link; lptr!=*head; lptr=lptr->link) {
		if(temp->data > lptr->data && lptr->link != '\0' && temp->data < lptr->link->data) {
			temp->link = lptr->link;
			lptr->link = temp;
		}
	}
	if(lptr == *head) {
		temp->link = lptr->link;
		lptr->link = temp;
	}
}

void printList(struct node **head)
{
  struct node *temp;

  if(head != '\0')
  {
    temp = *head;
    printf("\n");
    do {
      printf("%d ", temp->data);
      temp = temp->link;
    } while(temp != *head);
  }
}

void _insert_circular_ll()
{
	int arr[] = {12, 56, 2, 11, 1, 90};
	int i;
	 start with empty linked list
	struct node **head = '\0';
	struct node *temp;
	for(i = 0; i< sizeof(arr)/sizeof(int); i++) {
		printf("Entered");
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = arr[i];
		insert_circular_ll(&head, temp);
	}
	printList(head);
}

