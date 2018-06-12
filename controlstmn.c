#include<stdio.h>
int main(int a,char * *c)
{	
	int t,count=0,i=1,j=1,p;
	printf("enter a no. to get table\n");
	scanf("%d",&t);
	
	for(i=1;i<=10;i++)
	{
	printf("%d\n",i*t);
	}

	printf("enter a no. to check prime no.\n");
	scanf("%d",&p);
	for(i=1;i<=p/2;i++)
	{
	if(p%i==0)
	count++;
	
	}
	if(count==1)
	printf("prime no.\n");
	else
	printf("not prime\n");
	i=0;j=0;
	while(i<=6)
	{j=i;
		while(++j<=6)
		{printf("%d",j);}
	printf("\n");
	i++;
	}

}
