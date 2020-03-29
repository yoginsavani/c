#include<stdio.h>
main()
{
int num,pos;
printf("enter the num...\n");
scanf("%d",&num);
printf("enter the pos...\n");
scanf("%d",&pos);
printf("before num=%d\n",num);
num=num|(1<<pos);
printf("after num=%d\n",num);
}
