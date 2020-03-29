#include<stdio.h>
main()
{
int num,temp,s=0,r;
printf("enter the number...\n");
scanf("%d",&num);
for(temp=num;num;num=num/10)
{
r=num%10;
s=s+(r*r*r);
}
if(temp==s)
printf("Armstrong number....\n");
else
printf("not armstrong..\n");





}
