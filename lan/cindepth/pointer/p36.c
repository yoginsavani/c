#include<stdio.h>
       int main() 
       {
	int a = 5,b = 4,c = 9;
	*(a>b ? &a : &b) = (a+b)>c;
	printf("%d  %d\n",a,b);
       }
