#include<stdio.h>
int main(void)
{
	int x=10, a=15, b=6;
	x+= a>b ? (-x) : 100;
	printf("%d\n",x);
	return 0;
}
