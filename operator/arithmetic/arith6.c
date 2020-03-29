#include<stdio.h>
main()
{
int x,y,z;
printf("enter the number...\n");
scanf("%d %d %d",&x,&y,&z);
printf("x=%d y=%d z=%d \n",x,y,z);
x += 5;
y +=5;
z *=5;
printf("x += %d y +=%d z *= %d \n",x,y,z);
}
