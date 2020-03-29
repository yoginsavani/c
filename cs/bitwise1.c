#include<stdio.h>
main()
{
	char ch;
	printf("enter the char...\n");
	scanf("%c",&ch);
	ch=ch & ~(1<<5);
	printf("%c and ascii=%d\n",ch,ch);
}
