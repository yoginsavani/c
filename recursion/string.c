#include<stdio.h>
void prin(char*,char*);
int main()
{
	char s[10],d[10];
	printf("enter the s\n");
	scanf(" %s",s);
	printf("s=%s",s);
	prin(s,d);
	printf("d=%s",d);
	printf("\n");
}
void prin(char*p,char*d)
{
	if(*p)
	{
		*d=*p;
		prin(p+1,d+1);
	}
}

