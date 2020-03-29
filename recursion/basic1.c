#include<stdio.h>
int main()
{
static int i=0;
printf("hello....i=%d\n",i);
i++;
if(i<3)
main();
printf("hai...i=%d\n",i);



}
