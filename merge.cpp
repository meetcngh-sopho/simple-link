#include<iostream>
using namespace std;
struct node
{
int data;
struct node *next;
};
//ths function used for the create the link list
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
p->next=NULL;//when the all elements are fill in the list the we have to save null so that's why this is used
else
{
p->next=r;//otherwise it is used to point the next memory address
p=r;
}
}
return start;//it will return the starting address of linklist
}
void display(node *p)
{
while(p!=NULL)//when the p pointer point to null then it will break the loop
{
cout<<p->data<<" ";
p=p->next;//for the display the linklist
}
}
node *mergesort(node *p,node *p1)
{//now this function is used to merge the two link list
	
	node *start=new node,*pp,*r;
	pp=start;
	while(1)//this loop will move to infinite time . This is because  of my logical knowledge .You can use the own logic 
	{
		if(p1->data>p->data)/*if the second element has the big element then if condition is true and we fetch the data from the 
		first link list and save in the new list and move to next*/
	{	pp->data=p->data;
	r=new node;
	pp->next=r;
	p=p->next;
	if(p==NULL)//so now the condition is of the first link list is empty the we have to move all the data form the second list to the new list so we use the if condition 
	{
		while(p1!=NULL)//this is for the second list to save all the data in the new linklist when the list is empty
		{
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
	else if(p->data>p1->data)//same as above
		
	{//enter the new list}
	pp->data=p1->data;
	r=new node;
	pp->next=r;
	p1=p1->next;
	if(p1==NULL)//same as above
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
return start;//this is for return the address of the new linklist
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
