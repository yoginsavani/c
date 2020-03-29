#include<stdio.h>
int main(int argc,char**argv)
{
	FILE *fp;
	char ch;
	if(argc!=2)
	{
		printf("Usage:./a.out fname\n");
		return 0;
	}
	fp=fopen(argv[1],"r+");
		if(fp==0)
		{
			printf("file not present...\n");
			return 0;
		}
	while((ch=fgetc(fp))!=-1)
	{
		if(ch>='a'&&ch<='z')
		{
			fseek(fp,-1,SEEK_CUR);
			fputc(ch-32,fp);
		}
	}



}
