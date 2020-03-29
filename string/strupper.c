#include<stdio.h>
main()
{
	char s[20],i;
	printf("enter string\n");
	scanf("%s",s);
	printf("before...%s\t",s);
	for(i=0;s[i];i++)
if(s[i]>='a'&& s[i]<='z')
s[i]=s[i]-32;

	printf("after....%s\n",s);
}

