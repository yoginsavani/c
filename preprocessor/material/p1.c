#include<stdio.h>
main()
{
int i=2;
#ifdef DEF
i*=i;
#else
printf("\n%d",i);
#endif
}
