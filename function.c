#include<stdio.h>
nextLine()
{
printf("\n");
}

swap(int a,int b)
{
printf("present values of a is=%d and b is =%d\n",a,b);
int temp=a;
a=b;
b=temp;
printf("after swapping values of a is=%d and b is =%d\n",a,b);
}
int add(int a,int b)
{
int z=a+b;
return z;
}

float pi_value()
{

return 3.14;
}


int main(int a,char* *b)
{
printf("%d",add(34,56));
nextLine();
swap(45,89);
nextLine();
float z=pi_value();
printf("%f\n",z);

}
