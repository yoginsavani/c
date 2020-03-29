#include<stdio.h>
#include<stdlib.h>
int main(int argc,char**argv)
{
	FILE *fp;
	int i,c,y,c1;
	char *p,ch;
	if(argc!=3)
	{
		printf("Usage ./a.out file name line number\n");
		return 0;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file not present...\n");
		return 0;
	}
	c=0;
	c1=0;

	while((ch=fgetc(fp))!=-1)
	{
		c++;
		if(ch=='\n')
		{
			if(c>c1)
				c1=c;
			c=0;
		}
	}

	rewind(fp);
fp=fopen(argv[1],"w");

	y=atoi(argv[2]);

	p=malloc(c+1);

	i=0;
	while(ch=fgetc(fp)!=-1)
		p[i++}=ch;
		p[i]='\0';
		rewind(fp);
		for(i=0;i<c1;i++)
{
	if(i=
