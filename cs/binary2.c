#include<stdio.h>
main()
{
int num,pos;
printf("enter number...\n");
scanf("%d",&num);
for(pos=sizeof(int)*8-1;pos>=0;pos--)
printf("%d",num>>pos&1);






}
