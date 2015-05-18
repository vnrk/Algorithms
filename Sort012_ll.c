/*

 * 		Sort012_ll.c
 * 		TODO
 * 		Created on: 4:30:20 PM May 7, 2014
 * 		Author: Venkata 


struct node {
	int data;
	struct node *link;
};

void add(struct node **head, int new_data)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = new_data;

	temp->link = *head;
	*head = temp;
}

void print_list(struct node *head)
{
	struct node *temp;
	for(temp=head; temp; temp=temp->link){
		printf("%d|", temp->data);
	}
}

void sort012_ll_list(struct node *head)
{
	int count[3] = {0, 0, 0};
	struct node *temp;
	for(temp=head; temp; temp=temp->link) {
		count[temp->data] +=1;
	}
	int i=0;
	for(temp=head; temp; temp=temp->link) {
		if(count[i] == 0)
			i++;
		else {
			count[i]--;
			temp->data = i;
		}
	}
}

void _sort012_ll()
{
	struct node *head = '\0';
	add(&head, 0);
	add(&head, 1);
	add(&head, 0);
	add(&head, 2);
	add(&head, 1);
	add(&head, 1);
	add(&head, 2);
	add(&head, 1);
	add(&head, 2);
	print_list(head);
	sort012_ll_list(head);
	printf("\n");
	print_list(head);
}
*/
