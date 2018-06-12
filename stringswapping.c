#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
int i,j,len;
char temp, nam[20];
printf("enter name \n");
gets(nam);
printf("the name is \n");
puts(nam);

len=strlen(nam);

i=0;j=len-1;
printf("the str size  is %d\n",j);
while(i<j)
{
temp=nam[i];
nam[i]=nam[j];
nam[j]=temp;
i++;
j--;
}
printf("%s\n",nam);
//puts(nam);
}
