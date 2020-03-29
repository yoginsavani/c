#include<stdio.h>
main()
{
	char ch;
	printf("enter the char...\n");
	scanf("%c",&ch);
	if(ch>='a' && ch<= 'z')
	printf("%c and ascii = %d",ch,ch);
}
