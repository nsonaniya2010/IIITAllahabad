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

void prt_11(struct node *h)
{
	struct node* temp3 = head;
	int sum = 0;
	int i = 1;
	while(temp3 !=NULL)
	{
		printf("%2d", temp3->data);
		temp3  = temp3->next;
	}
	printf("\n");
}

void rem(int x, int y)
{	int i = 0;
	struct node* temp4 =head;
	while(temp4->data != x)
		temp4 = temp4->next;
	struct node* temp5 = temp4;
	while(temp5->data != y)
		temp5 = temp5->next;
	
	temp4->next = temp5;
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
	int x;
	int y;
	scanf("%d",&x);
	scanf("%d", &y);
	rem(x,y);
	struct node *h = NULL;
	prt_11(h);
}