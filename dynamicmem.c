#include<stdio.h>
#include<stdlib.h>

struct emp
{
int id;
char name[22];
float sal;
};

int main()
{
struct emp* ptr;
ptr=(struct emp*)malloc(sizeof(struct emp));

if(ptr==NULL)
printf("memory out of bound");

else
{
printf("enter values in emp\n");
scanf("%d%s%f",&ptr->id,ptr->name,&ptr->sal);
}
printf("values in emp id=%d  name=%s   sal=%f\n",ptr->id,ptr->name,ptr->sal);
return 0;
}
