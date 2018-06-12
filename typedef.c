#include<stdio.h>

typedef struct emp{

int id ;
char name[20];
int sal;

}e;


main()
{
//typedef struct emp e;
e e1;
scanf("%d%s%d",&e1.id,e1.name,&e1.sal);

printf("%d%s%d\n",e1.id,e1.name,e1.sal);

}
