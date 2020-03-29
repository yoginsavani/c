#include<stdio.h>
main()
{
	int num ,i=1;
	printf("enter the number....\n");
	scanf("%d",&num);
abc:
	printf("%d*%d=%d\n",num,i,num*i);
	i++;
	if(i<=10)
		goto abc;
}
