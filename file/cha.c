//getting a character

#include<stdio.h>
main(int argc,char **argv)
{
char ch;
int c=0;
FILE *fp;
if(argc!=3)
{
printf("Usage:./a.out fname char\n");
return;
}
fp=fopen(argv[1],"r");
	if(fp==0)
{
printf("file not present...\n");
return;
}
while((ch=fgetc(fp))!=-1)
{
if(ch==argv[2][0])
c++;
}
printf("%d\n",c);
}


