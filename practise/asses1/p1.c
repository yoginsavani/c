#include<stdio.h>
main()
{
int num,fact=1,i;
printf("enter the number...\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
	fact=fact*i;
printf("%d ",fact);

}
