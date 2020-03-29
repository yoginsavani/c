/* allocate a memory for one interger */
#include<stdio.h>
#include<stdlib.h>
main()
{
int *p;
	p=malloc(sizeof(int));
printf("enter the data....\n");
scanf("%d",p);
printf("*p =%d\n",*p);
}
