#include<stdio.h>
int main(int count,char* *value)
{
int i=23;
int *p;
char *c;




p=&i;
printf("i=%d\n",i);
printf("p=%d\n",p);
printf("&i=%d\n",&i);
printf("&p=%d\n",&p);
printf("*ptr=%d\n",*p);
printf("*$i=%d\n",*(&i));


printf("the size of int type pointer is %d and char type is =%d\n",sizeof(p),sizeof(c));


return 0;
}
