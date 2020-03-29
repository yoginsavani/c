#include<stdio.h>
main()
{
	char ch;
	printf("enter the char \n");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
		printf("small \n");
	else if(ch>='A' && ch<='Z')
		printf("Capital\n");
	else if(ch>='0' && ch<='9')
		printf("Digit\n");
	else
		printf("Non \n");
}
