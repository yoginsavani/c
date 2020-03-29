#include<stdio.h>
main()
{
int num,pos;
printf("enter the number....\n");
scanf("%d",&num);
pos=sizeof(int)*8-1;
abc:
if(num>>pos&1)
printf("1");
else
printf("0");
pos--;
if(pos>=0)
goto abc;





}
