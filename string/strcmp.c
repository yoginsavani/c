#include<stdio.h>
main()
{
	char f[20],s[20],i;
	printf("enter string\n");
	scanf("%s",f);
printf("enter second s\n");
scanf("%s",s);

	for(i=0;s[i];i++)
if(f[i]!=s[i])
break;
if(f[i]==s[i])
printf("equal\n");
else
printf("not equal\n");

}

