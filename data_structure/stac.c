#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;
push()
{
	int ele;
	if(top==CAPACITY)
		printf("stack is full\n");
	else 
	{
	printf("enter ele to push\n");
	scanf("%d",&ele);
	stack[++top]=ele;
	}
}


pop()
{
	if(top==-1)
	printf("stack is empty");

	else
	{
	top--;
	}
}



show()
{
	int i;
	if(top==-1)
		printf("stack is empty\n");
	else
	{
	printf("the arrays ele are=\n");
	for(i=0;i<=top;i++)
	printf("%d\t",stack[i]);
	}
	printf("\n");
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
