#include<stdio.h>
main()
{
int x=3;
if(x==2)
x=0;
if(x==3)
x++;
else x+=2;
printf("%d\n",x);
}
