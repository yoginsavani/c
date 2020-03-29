#include<stdio.h>
main()
{
int num,c,i;
printf("enter the number....\n");
scanf("%d",&num);
/*for(i=1,c=0;i<=num;i++)
if(num%i==0)
c++;
if(c==2)*/
/*for(i=2,c=0;i<num;i++)
if(num%i==0)
c++;
if(c==0)*/
for(i=2;i<num;i++)
if(num%i==0)
break;
if(i==num)
printf("prime.....\n");
else
printf("not prime.....\n");
}
