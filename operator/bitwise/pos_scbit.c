#include<stdio.h>
main()
{
int num,pos,res;
printf("enter the num...\n");
scanf("%d",&num);
printf("enter the pos...\n");
scanf("%d",&pos);
//res=num&(1<<pos)?printf("set\n"):printf("clear\n");
res=num>>pos&1?printf("set\n"):printf("clear\n");
}

