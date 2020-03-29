#include<stdio.h>
#include<string.h>
int main(int argc,char**argv)
{
	int c,c1;
	char s[1000],ch;
int b[][25]
	FILE *fp;
	if(argc!=3)
	{
		printf("Usage: ./a.out string f name\n");
		return 0;
	}
	fp=fopen(argv[2],"r");
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
		while (fgets(s,c1,fp))
			if(strstr(s,argv[1]))
				printf("%s",s);
	

}
