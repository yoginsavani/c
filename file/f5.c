//multiple copy in file

#include<stdio.h>
main(int argc,char **argv)
{
	int i;
	char a[20];
	char ch;
	FILE *fp,*fd;
	if(argc<3)
	{
		printf("Usage:./a.out sf df df1 df2 df3");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file is not present");
		return;
	}
		printf("file is present");
	for(i=2;i<argc;i++)
		{
			fd=fopen(argv[i],"w");
		while((ch=fgetc(fp))!=-1)
{		
//printf("hi");
	fputc(ch,fd);
	printf("%c",ch);
}			rewind(fp);
		}
		printf("\n");
	}
