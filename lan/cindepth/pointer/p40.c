#include<stdio.h> 
      main() 
      { 
	char a[20]; 
	char *p,*q; 
	p=&a[0]; 
	q=&a[10]; 
	printf("%d %d\n",q-p,&q-&p); 
      }
