#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("data","r");
fseek(fp,0,SEEK_END);
printf("r=%d\n",ftell(fp));





}
