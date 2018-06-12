#include<stdio.h>
union uni{

int id;
char name[2];
float sal;
};


main()
{
union uni u;
printf("size of union is %d\n",sizeof(u));
u.id=4;
printf("%d\n",u.id);

}
