#include<stdio.h>
       int main()
       {
	char a[ ] = "abcdefgh";
	int *ptr = a;
	printf("%x  %x\n",ptr[0],ptr[1]);
       }
