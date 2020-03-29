#include<stdio.h>
main(int argc,char **argv)
{
char s[20];
FILE *fp;
	if(argc!=2)
{
printf("usage..../a.out fname\n");
return;
}

fp=fopen(argv[1],"r");
if(fp==0)
{
printf("file not present...\n");
return;
}
printf("file present...\n");
}

