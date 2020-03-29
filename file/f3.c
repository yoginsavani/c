// copy own command

#include<stdio.h>
main(int argc,char **argv)
{
char a[20];
char ch;
FILE *fp,*fd;
if(argc!=3)
{
printf("Usage: ./a.out fs fd");
return;
}
fp=fopen(argv[1],"r");
if(fp==0)
{
printf("File is not present");
return;
}
printf("File is present");
fd=fopen(argv[2],"w");
while ((ch=fgetc(fp))!=-1)
{
//printf("%c",ch);
fputc(ch,fd);

printf("%c",ch);
}
printf("\n");
}
