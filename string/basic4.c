#include<stdio.h>
int main()
{
	int i;
	char s[20];
	printf("enter the string...\n");
	scanf("%s",s);
	printf("normai....\n");
	for(i=0;s[i];i++)
		printf("%c",s[i]);
	printf("\n.....i=%d..........\n",i);
	////////////////////////////////////////////
	for(i=i-1;i>=0;i--)
		printf("%c",s[i]);
	printf("\n");




}
