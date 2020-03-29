#include<stdio.h>
#include<stdlib.h>
main()
{
int i,n;
int *p;
printf("enter n numbers...\n");
scanf("%d",&n);
	p=malloc(sizeof (int)*n);
printf("enter the data...\n");
for(i=0;i<n;i++)
scanf("%d",&p[i]);
for(i=0;i<n;i++)
printf("%d ",p[i]);
printf("\n");
}
