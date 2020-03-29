#include<stdio.h>
       main()
       {
	char a[]="abcde";
	char *p=a;
	p++;
	p++;
p++;
	p[1]='z';
	printf("%s",p);
       }
