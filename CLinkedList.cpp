#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node* next;
};

class CircList
{
	private:
		node *last;
	public:
		CircList()
		{
			last = NULL;
		}
		void add_node_beg(int n);
		void add_node_end(int n);
		void print_linked_list();
		void delete_element(int num);
};

void CircList::add_node_beg(int n)
{	
	node *temp = new node;
	temp->data = n;

	if(last==NULL)
	{
		last = temp;
		temp->next = temp;
		return;
	}
	temp->next = last->next;
	last->next = temp;
}

void CircList::add_node_end(int n)
{	
	node *temp2 = new node;
	temp2->data = n;
	if(last == NULL)
	{
		last = temp2;
		temp2->next = temp2;
		return;
	}
	temp2->next = last->next;
	last->next = temp2;
	last = temp2;
}
void CircList::print_linked_list()
{	
	node *temp3 = new node;
	temp3 = last->next;
	if(temp3 == NULL)
	{
		printf("Empty linked list\n");
		return;
	}
	do
	{
		cout<<" "<<(temp3->data);
		temp3 = temp3->next;
	}while(temp3 != last->next);
}

void CircList::delete_element(int num)
{
	node *temp4 = new node;
	node *temp5 = new node;
	temp4 = last->next;
	temp5 = last;
	do
	{	
		if(temp4->data == num)	
		{	
			cout<<"Number deleted\t"<<temp4->data;
			temp5->next = temp4->next;
			return;
		}
		temp5 = temp5->next;
		temp4 = temp4->next;
	}while(temp4 != last->next);
	cout<<"Element not found so not deleted\n";

}


int main()
{
	cout<<"Enter the nodes you want to add:\n";
	int n;
	cin>>n;
	CircList obj;
	cout<<"Enter the elements:\n";
	int x;
	for(int i =0 ; i<n;i++)
	{	cin>>x;
		obj.add_node_end(x);
	}	
	cout<<"linked list is:\n";
	obj.print_linked_list();
	cout<<"\n";
	cout<<"Enter the element you want to delete:\n";
	int y;
	cin>>y;
	obj.delete_element(y);
	cout<<"\n";

	cout<<"Modified linked list is:\n";
	obj.print_linked_list();
	return 0;
}
