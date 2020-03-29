#include<stdio.h>
main()
{
unsigned long int i,j,t;
printf("enter the numbers");
scanf("%lu %lu",&i,&j);
printf("before swap i=%lu j=%lu \n",i,j);
/*
t=i;
i=j;
j=t;
*/
i=i*j;
j=i/j;
i=i/j;

printf("After swap i=%lu j=%lu \n",i,j);
}

