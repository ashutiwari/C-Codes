#include<stdio.h>
void swap(int*a,int*b)
{
int temp=*a;
*a=*b;
*b=temp;
}

main()
{
int x=12,y=21;
swap(&x,&y);
printf("after swap values are x=%d  and y=%d\n",x,y);

}
