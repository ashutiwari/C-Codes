#include<stdio.h>
#include<stdlib.h>

main()
{
int ch;
FILE * ptr,*ptr1;
ptr=fopen("sample.txt","r");
ptr1=fopen("samplecopy.txt","w");

if(ptr==NULL)
printf("unable to open file\n");
else
printf("file open in read mode\n");

printf("and all characters of file are\n");
while((ch=fgetc(ptr))!=EOF)
{
fputc(ch,ptr1);
printf("%c",ch);
}
printf("\n");





}
