#include<stdio.h>
main()
{
int num,r,s=0;
printf("enter the number\n");
scanf("%d",&num);
for(;num;num=num/10)
{
r=num%10;
s=s*10+r;
}
printf("s=%d\n",s);
}
