#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
int i,c;
FILE *fp;
char ch,*p;
if(argc!=4)
{
printf("Usage=./1.out filename char char");
}
fp=fopen(argv[1],"r+");
if(fp==0)
{
printf("file not present...\n");
return;
}
while((ch=fgetc(fp))!=-1)
{
if(ch==argv[2][0])
{
fseek(fp,-1,SEEK_CUR);
fputc(argv[3][0],fp);
}
}
}
