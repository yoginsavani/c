#include<stdio.h>
int fact (int);
main()
{
int num,f;
printf("enter the number...\n");
scanf("%d",&num);
f=fact(num);
printf("f=%d\n",f);
}
int fact (int n)
{
if(n)
return n* fact (n-1);
else
return 1;
}
