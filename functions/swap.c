#include<stdio.h>
void swap(int*, int*);
main()
{
int n1=10,n2=20;
printf("before n1=%d ,n2=%d \n",n1,n2);
swap(&n1,&n2);
printf("before n1=%d ,n2=%d \n",n1,n2);
}
void swap(int *n1,int *n2 )
{
int temp;
temp=*n1;
*n1=*n2;
*n2=temp;
}

