#include<stdio.h>
int main()
{
int i,j;
printf("enter the number...\n");
scanf("%*d %*d",&i,&j);
printf("%d\n",printf("%*c %*c\n",i,'\0',j,'\0'));
}
