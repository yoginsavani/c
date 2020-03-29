#include<stdio.h>
main()
{
	char f[20],s[20],i,j;
	printf("enter f string\n");
	scanf("%s",f);
	printf("enter s string\n");
	scanf("%s",s);
	printf("before...%s  %s",f,s);
	for(i=0;s[i];i++);
for(j=0;s[j];i++,j++)
		f[i]=s[j];
	f[i]=s[j];

	printf("after....%s   %s\n",f,s);
}

