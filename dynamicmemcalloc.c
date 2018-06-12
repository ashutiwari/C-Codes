#include<stdio.h>
#include<stdlib.h>
main()
{
int i,j,r,*arr,*re;

printf("enter size of array\n");

scanf("%d",&i);

arr=(int*) calloc(i,sizeof(int));
if(arr==NULL)
printf("memory full");
else
{
printf("enter element in the array size %d\n",i);
for(j=0;j<=i;j++)
scanf("%d",&arr[j]);
}
printf("elements in the array id=\n");
for(j=0;j<=i;j++)
printf("%d\n",arr[j]);


printf("enter to rellocat size of array\n");
scanf("%d",&r);

re=(int*)realloc(arr,sizeof(int)*r);
printf("new size is %d\n",sizeof(re));


}
