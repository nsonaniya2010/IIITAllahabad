#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
	struct node* prev;
};
struct node* tail;
void add_beg(struct node** head, int x)
{	struct node* new = (struct node*)malloc(sizeof(struct node));
	new->data = x;

	if((*head) == NULL)
	{	tail = *head;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return;
	}
	new->prev = NULL;
       	new->next = *head;
	(*head)->prev = new;
	*head = new;	
}
void print(struct node** head)
{
	struct node* temp = *head;
	while(temp!=NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
}

void print_prev(struct node** tail)
{
	struct node* temp2 = *tail;
	while(temp2!=NULL)
	{
		printf("%d", temp2->data);
		temp2 = temp2->prev;
	}
}

int main()
{	struct node* head = NULL;
	printf("Enter the nodes you want to add at the begining of list:\n");
	int n;
	scanf("%d", &n);
	int x;
	for(int i = 0 ;i<n;i++)
	{
		scanf("%d", &x);
		add_beg(&head,x);	
	}
	print(&head);
	printf("\n");
	print_prev(&tail);

return 0;
}
