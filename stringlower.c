#include<stdio.h>
char* lowercast(char* x)
{
int i=0;
while(x[i]!='\0')
{
	if(x[i]>='A' && x[i]<='Z')
	{
	x[i]=x[i]+32;
	
	}
	i++;
}
return x;
}

int main()
{
char a[10];
gets(a);
printf("the string in lower cast is=\n");
printf("%s\n",lowercast(a));
return 0;
}
