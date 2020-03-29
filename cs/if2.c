#include<stdio.h>
main()
{
	char ch;
	printf("enter the char...\n");
	scanf("%c",&ch);
	if(ch>='a' && ch<= 'z')
	ch=ch-32;
	printf("%c and ascii = %d\n",ch,ch);
}

