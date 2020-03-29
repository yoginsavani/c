#include<stdio.h>
main()
{
int i=10,j;
int *p;
p=&i;
//j=*p++;.
j=*++p;
//j=++*p;
//j=(*p)++;
printf("%d %d\n",i,j);





}
