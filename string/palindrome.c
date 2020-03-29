#include<stdio.h>
main()
{
	char s[20],i,j,temp;
	printf("enter string\n");
	scanf("%s",s);
	for(i=0;s[i];i++);
for(i=i-1,j=0;i>j;i--,j++)
	if(s[i]==s[j])  
	printf("palindrome..\n");
else
printf("not..\n");
}

