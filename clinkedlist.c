#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* last = NULL;


void cadd_beg(int x)
{
	struct node* t = (struct node*)malloc(sizeof(struct node));
       	t->data = x;
	
	if(last == NULL)
	{
		last = t;
		t->next = t;
		return;
	}	

	t->next = last->next;
	last->next = t;

}

void cadd_end(int x)
{
	struct node* new = (struct node*)malloc(sizeof(struct node));
	new->data = x;
	if(last == NULL)
	{
		last = new;
		new->next = new;
		return;
	}
	new->next = last->next;
	last->next = new;
	last = new;
}

void print()
{
	struct node* temp = last->next;
	if(last == NULL)
	{
		printf("Empty linked list\n");
		return;
	}

	do
	{
		printf("%d", temp->data);
		temp = temp->next;
	}while(temp != last->next);
}


int main()
{
	printf("Enter the number of nodes you want to add:\n");
	int n;
	scanf("%d", &n);
	
	int x;

	for(int i = 0;i<n;i++)
	{
		scanf("%d", &x);
		//cadd_beg(x);
		cadd_end(x);
	}
	print();

return 0;
}
