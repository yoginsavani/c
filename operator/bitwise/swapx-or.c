#include<stdio.h>
main()
{
int n1,n2;
printf("enter the numbers...\n");
scanf("%d%d",&n1,&n2);
printf("before swap n1=%d n2=%d \n",n1,n2);
n1= n1^n2;
n2=n1^n2;
n1=n1^n2;
printf("after swap n1=%d n2=%d \n",n1,n2);
}
