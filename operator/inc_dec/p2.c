#include<stdio.h>
main()
{
volatile int i=10;
printf("%d %d %d\n",++i,++i,++i);
}
