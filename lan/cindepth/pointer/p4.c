#include<stdio.h>
      int main()
      {
	int x = 256;
	char *p = &x;
	*++p = 3;
	printf("%d",x);
      }
