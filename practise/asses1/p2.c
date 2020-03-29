#include<stdio.h>
main()
{
int r,s=0,num;
printf("enter the number...\n");
scanf("%d",&num);
for(;num;num=num/10)
{
r=num%10;
s=s+r;
}
printf("%d\n",s);

}
