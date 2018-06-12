#include<stdio.h>
#include<stdlib.h>

typedef struct node
	{
	int data;
	struct node* next;
	}currnode;
currnode *head=NULL;


void append()
{
int ele;
currnode *cnode;
currnode *temp;
cnode=(currnode*)malloc(sizeof(currnode));
temp=head;

printf("enter data value in data\n");
scanf("%d",&ele);
	
	if(head==NULL)
	{
	cnode->next=head;
	cnode->data=ele;
	head=cnode;
	}

	else
	{
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	cnode->next=temp->next;
	cnode->data=ele;
	temp->next=cnode;
}
}


void display()
{
	currnode *temp;
	temp=head;
	while(temp!=NULL)
	{
	printf("\t%d",temp->data);
	temp=temp->next;
	}
printf("\n");
}

void add_as_firstnode()
{
	currnode *cnode, *temp;
	int ele;
	printf("enter ele to first node\n");
	scanf("%d",&ele);
	cnode=(currnode*)malloc(sizeof(currnode));
	cnode->data=ele;
	cnode->next=head;
	head=cnode;
}

add_bw_nodes()
{

currnode *cnode, *temp;
        int ele,loc,i=0;
        printf("enter ele of the node and loc to insert respectivaly\n");
        scanf("%d%d",&ele,&loc);
        cnode=(currnode*)malloc(sizeof(currnode));
	cnode->data=ele;
	temp=head;
	for(i=1;i<=loc;i++)
	{
	temp=temp->next;
	}
	cnode->next=temp->next;
	temp->next=cnode;

}
void delete()
{
	int i,loc;
	currnode *temp,*prev;
	printf("enter loc to delete\n");
	scanf("%d",&loc);
	temp=head;
	if(loc==0)
	{
		head=temp->next;
		free(temp);
	}

	else
	{
	for(i=1;i<=loc;i++)
	{	
		temp=temp->next;
	}	
		if(temp==NULL)
		free(temp);
			
		else
		{
			for(i=1;i<loc;i++)
			{
			prev=prev->next;
			}
		prev->next=temp->next;
		free(temp);
		}
	}
}


int main()
{
//perform operation on linklist
int l=1,s;
while(l!=0)
{
printf("\nenter your choice\n1.append\n2.add_as_firstnode\n3.display\n4.add_bw_nodes\n5.delete\n0.exit\n");
scanf("%d",&s);
switch(s){
       case 1:append();
                  break;
       case 2:add_as_firstnode();
                   break;
       case 3:display();
                   break;
	case 4:add_bw_nodes();
                   break;
	case 5:delete();
                   break;
       default:printf("wrong choice\n");
          }
    l=s;

}
}                                                                          
