#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("data","r");
printf("1)fp=%u %u \n",fp,ftell(fp));

fgetc(fp);
printf("1)fp=%u %u \n",fp,ftell(fp));

fgetc(fp);
printf("2)fp=%u %u \n",fp,ftell(fp));


fgetc(fp);
printf("3)fp=%u %u \n",fp,ftell(fp));
}
