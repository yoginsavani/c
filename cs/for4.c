#include<stdio.h>
main()
{
int num,i,j,m,n;
printf("enter the number....\n");
scanf("%d",&num);
for(i=0,j=4;i<4;i++,j++)
m=num>>i&1;
n=num>>j&1;
if(m!=n)
{
num=num^1<<i;
num=num^1<<j;

}
printf("num=%d",num);




}
