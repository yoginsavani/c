// Write a Program to Convert Lower to Upper and Upper to Lower Cases of a given file.

#include<stdio.h>

main(int argc,char **argv)
{
	char ch;
	char name[20];
	FILE *fp;

	if(argc!=2)
	{
		printf("Usage:./a.out fname");
		return;
	}
	fp=fopen(argv[1],"r+");

	if(fp==0)
	{
		printf("file is not present");
		return;
	}

	printf("file is present");

	while((ch=fgetc(fp))!=-1)
	{
		//printf("----------------\n");
		if((ch>='a'&&ch<='z') ||( ch>='A' && ch<='Z'))
			ch=ch^(1<<5);
		fseek(fp,-1,SEEK_CUR);
		fputc(ch,fp);
	}


}
