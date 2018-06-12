#include<stdio.h>
int main()
{
int i,loc,ele,arr[50];
	printf("enter values in array\n");
	for(i=0;i<=5;i++)
	scanf("%d",&arr[i]);
	printf("the array ele are=\n");
	for(i=0;i<=5;i++)
	printf("\t%d",arr[i]);


printf("\nenter loc to insert \n");
scanf("%d",&loc);
printf("enter ele to insert\n");
scanf("%d",&ele);

for (i=6;i>=loc;i-- )
{
arr[i+1]=arr[i];
}

arr[loc]=ele;
printf("after insert ele array elements are=\n");
for(i=0;i<=6;i++)
	printf("\t%d",arr[i]);

printf("\n");
}
