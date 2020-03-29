// Write a Program to Capitalize First Letter of every Word in a file.

#include<stdio.h>
#include<stdlib.h>

main(int argc,char **argv)
{
	char ch,*cp;
	int c,m;
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
	c=0;
	while((ch=fgetc(fp))!=-1)
	{
		c++;
	}
	rewind(fp);
	cp=malloc(c);
	while((fscanf(fp,"%s",cp))!=-1)
	{
//	printf("hello........");
		for(m=0;cp[m];m++);
		cp[0]=(cp[0]^(32));
		fseek(fp,-m,SEEK_CUR);	
		fputs(cp,fp);
	}
}














	
	












