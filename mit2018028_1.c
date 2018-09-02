#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* head = NULL;
struct node* last = NULL;

void add_end(int num)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node*));
	temp->data = num;
	temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
		last = temp;
		return ;
	}
	while(last->next != NULL)
		last = last->next;
	
	last->next = temp;
	last = temp;

}
void print(struct node *h)
{
	struct node* temp3 = head;
	int sum = 0;
	int i = 1;
	while(temp3 !=NULL)
	{	if(i%2==0)
		{
			sum =  sum + temp3->data;
		}
		i++;

		temp3 = temp3->next;
	}
	printf("%d\n", sum);
}

int main()
{
	int n;
	scanf("%d", &n);
	int i = 0;
	int num;
	for(i =0;i<n;i++)
	{
		scanf("%d", &num);
		add_end(num);
	}
	struct node* h = NULL;

	print(h);

}
