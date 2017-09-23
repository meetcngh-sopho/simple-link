#include<iostream>
using namespace std;
struct node
{
int data;
struct node *next;
};

node *insertion(int n)
{
node *r,*start,*p=new node;
start=p;

cout<<"Enter the data ";
for(int i=0;i<n;i++)
{
cin>>p->data;
r=new node;
if(i+1==n)
p->next=NULL;
else
{
p->next=r;
p=r;
}
}
return start;
}
void display(node *p)
{
while(p!=NULL)
{
cout<<p->data<<" ";
p=p->next;
}
}
node *mergesort(node *p,node *p1)
{
	node *start=new node,*pp,*r;
	pp=start;
	while(1)
	{
		if(p1->data>p->data)
		{//enter the new list
	pp->data=p->data;
	r=new node;
	pp->next=r;
	p=p->next;
	if(p==NULL)
	{
		while(p1!=NULL){
			pp=r;
			pp->data=p1->data;
	r=new node;
	pp->next=r;
	p1=p1->next;
		}
		pp->next=NULL;
		break;
	}
		}
	else if(p->data>p1->data)
		
	{//enter the new list}
	pp->data=p1->data;
	r=new node;
	pp->next=r;
	p1=p1->next;
	if(p1==NULL)
	{
	while(p!=NULL){
			pp=r;
			pp->data=p->data;
	r=new node;
	pp->next=r;
	p=p->next;
		}
		pp->next=NULL;
		break;
		
		
	}
	}
	pp=r;
	
}
return start;
}
int main()
{
cout<<"Enter the number of elements of linklist";
int n;
cin>>n;
node *start=insertion(n);
cout<<"Enter the second linklist element ";
cin>>n;
node *start1=insertion(n);

start1=mergesort(start,start1);
display(start1);
return 0;
}