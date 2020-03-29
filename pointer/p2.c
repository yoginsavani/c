#include<stdio.h>
main()
{
float f=23.5;
int *ip,i;

ip=(int*)&f;
for(i=31;i>=0;i--)
printf("%d",*ip>>i&1);
printf("\n");



}
