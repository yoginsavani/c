#include<stdio.h>
#define prod(x)(x*x)
int main()
{
volatile int i=5,j,k;
j=prod(i++);
printf("%d\n",i);
k=prod(++i);
printf("%d %d\n",j,k);
}
