#include<bits/stdc++.h>

using namespace std;
class node
{
    public:
	int data;
	node *next;



};

class linkedlist
{
    public:
	node *head  ;
	int last; 
	linkedlist()
	{
		head =NULL;
	
	}
    
	void insertatfirst(int dataa)
	{
		node *temp = new node;
		temp -> data = dataa;
		temp -> next = NULL;
		if(head == NULL)
		{
			
			head = temp;
		}
		else
		{
			temp -> next = head;
			head = temp;		
		}	
		
		
	}

	void display()
	{
		node *traverse = head;
		
		int count = 0;
		while( traverse != NULL)
		{
			cout<<traverse->data<<" ";
			traverse = traverse->next;		
			count ++;
		
		}
		cout<<"count "<<count<<endl;
		cout<<endl;
	}
	
	void reverse()
	{
		node * current = head;
		if(current == NULL)
		{
			cout<<"Linked List is empty! "<<endl;
			return;		
		}
		
		
		node *nexta = NULL;
		node *temp = NULL;
		
		while(current != NULL)		
		{
			nexta = current-> next;
			current->next = temp;
			temp = current;
			current = nexta;		
		}
		head = temp;
	    
	    
	}
	void intersect (linkedlist *l2)
	{
		
	
	
	}
};

int main()
{
	linkedlist ll,l2;
	ll.insertatfirst(45);
	ll.insertatfirst(60);
	ll.insertatfirst(88);
	ll.insertatfirst(98);
	ll.insertatfirst(12);
	ll.insertatfirst(2);
	cout<<"Linked List before reverse"<<endl;	
	ll.display();
	ll.reverse();
	cout<<"Linked List after reverse"<<endl;
	ll.display();
	l2.insertatfirst(1);
	l2.insertatfirst(4);
	l2.insertatfirst(5);
	l2.insertatfirst(6);
	l2.insertatfirst(7);
	cout<<"Second linked List"<<endl;
	l2.display();
	
		
	
	return 0;
}
