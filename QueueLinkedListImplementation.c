//Linked list implementation of queue

#include <stdio.h>
#include <conio.h>

struct node
{
	int data;
	node *next;
};
typedef struct node lnode;

lnode *front = NULL;
lnode *rear = NULL;
lnode *extranode = NULL;
lnode *freenode = NULL;

void push(int n){
	extranode = *malloc(sizeof(node));
	extranode->data = n;
	extranode->next = NULL;

	if(front == NULL){
		front = extranode = rear;
		rear->next = NULL;
	}
	else
		rear->next = extranode;
		extranode->next = NULL;
		rear = extranode;


}

int remove(){
	int rdata;
	if(front == NULL){
		printf("Khali hai, kya remove karega bhenchod");
	}
	else
	{	
		freenode = front;
		rdata = freenode->data;
		printf("ye nikala tune: %d\n",&rdata);
		front = front->next;
		free(freenode);
		return rdata;
	}
}


int main(){

	int x, value;
	printf("Kya krna hai tujhe queue ke saath:\n");
	printf("1. Daalna hai?\n");
	printf("2. Nikalna hai?\n");
	printf("3. Kuch nahi krna?\n");
	int c;
	scanf("%d",&c);

	switch(c):
	case 1:
	printf("Kitti values dalna hai chodu:\n");
	scanf("%d", &x);
	printf("Daal na chutiye idhar:\n");

	for (int i = 0; i < x; ++i)
	{
		scanf("%d", &value);
		push(value);
	}
	break;
	case 2: 
	remove();
	break;
	case 3: 
	printf("\nKuch nahi krna tha to bhenchudane aaya madarchod, agli baar dikh mat jaiyo.");
	break;
	default:
	break;

return 0;}
