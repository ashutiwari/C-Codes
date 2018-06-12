#include<stdio.h>
int add(x,y)
{
int z=x+y;
return z;
}
int main(int c,char * *a)
{

int k,i,j;

i=atoi(a[1]);
j=atoi(a[2]);

//printf("%d",i);
k=add(i,j);
printf("sum=%d\n",k);
}
