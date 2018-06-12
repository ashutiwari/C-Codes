#include<stdio.h>
#include<stdlib.h>

main()
{
int ch;
FILE * ptr;
ptr=fopen("sample.txt","r");
if(ptr==NULL)
printf("unable to open file\n");
else
printf("file open in read mode\n");

printf("and all characters of file are\n");
while((ch=fgetc(ptr))!=EOF)
printf("%c",ch);

printf("\n");
}
