#include<iostream>
using namespace std;
struct node{
	int data;
struct 	node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
void insertnode(int b)
{
	node *temp=new node;
	temp->data=b;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	{
			tail->next=temp;
	tail=tail->next;}
	tail->next=head;

}
void insertnodeatbeg(int b){
	struct node *beg=new node;
	if (beg==NULL)
	{
		cout<<"cant insert node\n";
	}
	else{
		beg->data=b;
		beg->next=head;
		head=beg;
	}
	cout<<"node is inserted in the begining\n";
	
}
void insertnodeatpos(int c,int d)
{
 int i;
    struct node *newNode, *temp;

    newNode = new node;

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = c; // Link data part
        newNode->next = NULL;

        temp = head;

        for(i=1; i<d-1; i++)
        {
            temp = temp->next;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {
            /* Link address part of new node */
            newNode->next = temp->next; 

            /* Link address part of n-1 node */
            temp->next = newNode;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}
void insertnodeatend(int e)
{
  struct node *newNode, *temp;

    newNode = new node;

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = e; // Link the data part
        newNode->next = NULL; 

        temp = head;

        // Traverse to the last node
        while(temp != NULL && temp->next != NULL)
            temp = temp->next;

        temp->next = newNode; // Link address part

       cout<<"DATA INSERTED SUCCESSFULLY INSERTED AT END\n";
    }
}
void displaynode()
{
	if (head==NULL)
	{
		cout<<"linked list is empty\n";
	}
	else
{
	cout<<"node is displayed\n";
		while(head!=NULL)
{
		cout<<head->data<<" ";
	head=head->next;}
}}
int main()
{
	int nodes,a,pos,b,c,d,e;
	cout<<"how many nodes you want to enter\n";
	cin>>nodes;
	cout<<"enter no in nodes\n";
	for(int i=1;i<=nodes;i++)
	{
		cin>>a;
		insertnode(a);
	}
	cout<<"press 1 to insert node at begining\n";
	cout<<"press 2 to insert node at any pos\n";
	cout<<"press 3 to insert node at last\n";
	cout<<"select your option\n";
	cin>>pos;
	switch(pos){
		case 1:
			cout<<"enter the no that you want to insert in the begining\n";
			cin>>b;
			insertnodeatbeg(b);
			displaynode();
			break;
			
		case 2:
			cout<<"enter no that you want to insert\n";
			cin>>c;
			cout<<"enter pos at which you want to insert\n";
			cin>>d;
			insertnodeatpos(c,d);
			displaynode();
		
			break;
			
		case 3:
			cout<<"enter no that you want to insert";
			cin>>e;
			insertnodeatend(e);
			displaynode();
			
	}
	
//	displaynode();
	
}
