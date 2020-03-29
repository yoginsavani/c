#include<stdio.h>
main()
{
	char s[20],d[20],i,j;
	printf("enter string\n");
	scanf("%s",s);
	printf("before...%s",s);
	for(i=0;s[i];i++);

	for (i=i-1,j=0;i>=0;i--,j++)

		d[j]=s[i];

	d[j]='\0';

	printf("after....%s\n",d);
}

