//position



#include<stdio.h>
main()
{
FILE *fp;
	fp=fopen("data","r");
printf("size=%d\n",sizeof(*fp));
printf("1) fp=%u %d\n",fp,ftell(fp));
fgetc(fp);

printf("2) fp=%u %d\n",fp,ftell(fp));
fgetc(fp);


printf("3) fp=%u %d\n",fp,ftell(fp));
fgetc(fp);


printf("4) fp=%u %d\n",fp,ftell(fp));

}
