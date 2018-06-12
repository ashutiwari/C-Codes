#include<stdio.h>
int add(int a,int b)
{
int z=a+b;
return z;
}
int diff(int a,int b)
{
int z=a-b;
return z;
}



int main()
{
int x=10,y=2;
int (*ptr)(int,int);
ptr=&add;
printf("%d\n",ptr(x,y));

ptr=&diff;
printf("%d\n",ptr(x,y));



}
