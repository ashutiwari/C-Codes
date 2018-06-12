#include<stdio.h>
#define CAPACITY 5
int queue[CAPACITY];
int front=0;
int rear=0;

push()
{
	int ele;
	printf("enter ele to push\n");
	scanf("%d",&ele);
	if(rear==CAPACITY)
	printf("queue is full");
	else
	{
	queue[rear++]=ele;
	
	}
}



pop()
{
int i;
if(front==rear)
	printf("the que is empty\n");
else 
	{
	printf("element pop is %d",queue[front]);
	for(i=0;i<rear;i++)
	{
	queue[i]=queue[i+1];
	}
	rear--;
}}

show()
{
	int i;
	if(front==rear)
	printf("the queue id empty\n");

	else
	{
	for(i=front;i<rear;i++)
		printf("%d",queue[i]);
	printf("\n");
}
}

int main()
{
//perform operation on stack
int l=1,s;
while(l!=0)
{
printf("\nenter your choice\n1.push\n2.pop\n3.show\n0.exit\n");
scanf("%d",&s);
switch(s){
       case 1:push();
            break;
     case 2:pop();
            break;
     case 3:show();
             break;
     default:printf("wrong choice\n");
         }
  l=s;

}
}
