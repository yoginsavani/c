#include<stdio.h>
main()
{
int i;
printf("enter number....\n");
scanf("%d",&i);
//i%2==0?printf("EVEN \n"):printf("ODD \n");
//i%20?printf("ODD \n"):printf("EVEN \n");
i&1?printf("ODD \n"):printf("EVEN \n");
}
