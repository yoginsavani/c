#include<stdio.h>
int prime (int);
int main()
{
int i,num,l;
printf("enter the number");
scanf("%d",&num);
l=prime(num);
if(l==0)
printf("prime no \n");
else
printf("not prime \n");
printf("\n");
}
int prime(int num)
{
int i;
for(i=2;i<num;i++)
if(num%i==0)
break;
if(num==i)
return 0;
else 
return 1;
}
