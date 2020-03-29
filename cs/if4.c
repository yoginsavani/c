#include<stdio.h>
main()
{
int num,pos,op;
printf("enter the num....\n");
scanf(("%d",&num);
printf("enter the pos....\n");
scanf("%d",&pos);
printf("enter option \n1)set \n2)clear \n3)compliment \n");
scanf("%d",&op);
if(op==1)
{
num=num|1<<pos;
printf("num=%d\n",num);
}
else if(op==2)
{
num=num&~(1<<pos);
printf("num=%d\n",num);
}
else if(op==3)
{
num=num^1<<pos;
printf("num=%d\n",num);
}
else 
printf("Unknown value \n")






}
