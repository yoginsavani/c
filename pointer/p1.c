#include<stdio.h>
main()
{
int i=10,j=20,k=30,*p;
p=&j;
printf("i=%d *p=%d\n",i,*p);
*p=100;
printf("i=%d *p=%d\n",i,*p);

}
