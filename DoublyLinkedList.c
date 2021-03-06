/*
Enter the nodes you want to add at the begining of list:
5
1 4 3 6 9
96341
14369
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
	struct node* prev;
};

struct node* tail = NULL;
struct node* etail = NULL;


void add_beg(struct node** head, int x)
{	struct node* new = (struct node*)malloc(sizeof(struct node));
	new->data = x;

	if((*head) == NULL)
	{	
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		tail = *head;
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

void add_end(struct node** ehead, int x)
{
	struct node* enew = (struct node*)malloc(sizeof(struct node));
	enew->data = x;
	if((*ehead) == NULL)
	{
		enew->prev = NULL;
		enew->next = NULL;
		(*ehead) = enew;
		etail = (*ehead);
		return;
	}
	etail->next = enew;
	enew->next = NULL;
	enew->prev = etail;
	etail = enew;
}

int main()
{	
	struct node* ehead = NULL;
	struct node* head = NULL;
	printf("Enter the nodes you want to add at the begining of list:\n");
	int n;
	scanf("%d", &n);
	int x;
	for(int i = 0 ;i<n;i++)
	{
		scanf("%d", &x);
		add_end(&ehead,x);	
	}
	print(&ehead);
	printf("\n");
	print_prev(&etail);

return 0;
}

