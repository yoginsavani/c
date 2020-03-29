#include<stdio.h>
main()
{
int num,f=1,i;
printf("enter the number...\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
f=f*i;
printf("%d\n",f);
}
