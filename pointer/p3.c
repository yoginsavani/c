#include<stdio.h>
main()
{
int i,j;
float f=23.5;
//char *cp=&f;
//cp=&f;
//cp=cp+3;
int *ip=&f;

/*for(i=0;i<4;i++)
{
for(j=7;j>=0;j--)*/
for(i=31;i>=0;i--)
printf("%d",*ip>>i&1);
//cp=cp-1;
//}
printf("\n");




}
