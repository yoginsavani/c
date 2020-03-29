#include<stdio.h>
main()
{
//unsigned long int i= 2000000000,j=3,k;

/*unsigned long int i= 2000000000,j=3;
  unsigned long long int k;*/

/*unsigned long int i= 2000000000;
  unsigned long long int k,j=3;*/

  unsigned long int i= 2000000000, j=3;
  unsigned long long int k;

  printf("i=%lu j=%lu k=%llu \n",i,j,k);

  k=(unsigned long long int)i*j;

  printf("i=%lu j=%lu k=%llu \n",i,j,k);
}
