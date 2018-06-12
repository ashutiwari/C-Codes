#include<stdio.h>

struct emp
{
int id;
char name[22];
float sal;
}e,e1,e2;


main()
{
printf("size of structure is %d\n",sizeof(e));
printf("enter id ,name ,sal for emp e1\n");
scanf("%d%s%f",&e1.id,e1.name,&e1.sal);
printf("the name of e1 is %s and id is %d sal is %f\n",e1.name,e1.id,e1.sal);

printf("enter id ,name ,sal for emp e\n");
scanf("%d%s%f",&e.id,e.name,&e.sal);
printf("the name of e is %s and id is %d sal is %f\n",e.name,e.id,e.sal);

printf("enter id ,name ,sal for emp e2\n");
scanf("%d%s%f",&e2.id,e2.name,&e2.sal);
printf("the name of e2 is %s and id is %d sal is %f\n",e2.name,e2.id,e2.sal);


}
