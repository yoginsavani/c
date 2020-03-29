#include<stdio.h>
#include<stdlib.h>
main()
{
char *p;
	p=malloc(10);
printf("enter the string..\n");
gets(p);
printf("Data :%s \n",p);
}
