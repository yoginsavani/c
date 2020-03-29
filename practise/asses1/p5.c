#include<stdio.h>
main()
{
int num,r,s=0,temp;
printf("enter the number...\n");
scanf("%d",&num);
temp=num;
for(;num;num=num/10)
{
r=num%10;
s=s*10+r;
}
if(temp==s)
printf("Palindrone...\n");
else
printf("not palinrone...\n");
}
