#include<stdio.h>
      int main()
      {
	int a[ ] = {10,20,30,40,50},i;
	char *p = a;

	for(i=0;i<5;i++)
           printf("%d   ",*p++);
      }
