//Linked list implementation of queue

#include <bits/stdc++.h>

using namespace std;
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
  extranode = new lnode;
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
		cout<<"Khali hai, kya remove karega bhenchod";
	}
	else
	{	
		freenode = front;
		rdata = freenode->data;
		cout<<"ye nikala tune: "<<rdata;
		front = front->next;
		delete(freenode);
	}
	return(rdata);
}


int main(){

	int x, value;
	cout<<"Kya krna hai tujhe queue ke saath:\n";
	cout<<"1. Daalna hai?\n";
	cout<<"2. Nikalna hai?\n";
	cout<<"3. Kuch nahi krna?\n";
	int c;
	cin>>c;

	switch(c){
	case 1:
	cout<<"Kitti values dalna hai chodu:\n";
	cin>>x;
	cout<<"daal na chutiye idhar:\n";

	for (int i = 0; i < x; ++i)
	{
		scanf("%d", &value);
		push(value);
	}
	break;
	case 2:
	if(front !=NULL){ 
	int x = remove();
	cout<<"Ye remove hua chutiye:"<<x;
	    
	}
	else
	cout<<"Khali hai chutiye\n";
	break;
	case 3: 
	cout<<"\nKuch nahi krna tha to bhenchudane aaya madarchod, agli baar dikh mat jaiyo.";
	break;
	default:
	break;
}
return 0;}
