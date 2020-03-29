#include<stdio.h>
       int main()
       {
	const int ary[4] = {1,2,3,4};
	int *p = ary+3;
	*p = 5;
//	ary[3] = 6;
	printf("%d",ary[3]);
     }
