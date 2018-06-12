#include<stdio.h>
int largno(int array[])
{
int v,i;
v=array[0];
for(i=1;i<5;i++)
{
if(v<array[i])
	v=array[i];
}
return v;
}

int main(int gc,char * *n)
{
int i, a[5];
printf("enter 5 elements into the array\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("arrays elements are=");
for(i=0;i<5;i++)
printf("\t%d",a[i]);

printf("\n%d is the large nio in array\n",largno(a));
return 0; 

}



