#include<stdio.h>
main()
{
int i=0,j=0,k;
printf("i=%d,j=%d,k=%d \n",i,j,k);
//k=i||(j=300);
k=i&&(j=300);

printf("i=%d,j=%d,k=%d \n",i,j,k);
}
