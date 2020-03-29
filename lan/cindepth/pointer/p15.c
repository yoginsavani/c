#include<stdio.h>
       int main() 
       { 
	int a[]={10,20,30,40,50}; 
	char *p; 
	p=(char *)a; 
	printf("%d\n",*((int *)p+4)); 
       }
