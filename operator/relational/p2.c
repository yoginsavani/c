#include<stdio.h>
main()
{
int x=20,y=35;
x=y++ + x++;
y=++y + ++x;
printf("%d %d\n",x,y);
}
