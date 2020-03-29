//2) Write a Program to remove a Specific line from the given text file.

#include<stdio.h>
#include<stdlib.h>

main(int argc,char **argv)
{
	FILE *fp;
	char ch,c,**cp;

	if(argc!=3)
	{
		printf("USAGE: ./a.out filename line number \n");
		return 0;
	}

	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file not present...\n");
		return;
	}

	c=fgetc(fp);
	while(c!=EOF)
	{
		printf("%C",c);
		c=fgetc(fp);
	}

	rewind(fp);

	int total_char=0,no_line=0,temp=0,line_char=0;

	while((ch=fgetc(fp))!=EOF)
	{
		total_char++;
		temp++;
		if(ch=='\n')
		{
			if(temp>line_char)
				line_char=temp;
			no_line++;
			temp=0;
		}
	}
	rewind(fp);

	int m=atoi(argv[2]);
	m=m-1;

	printf("size:%d lines:%d line_char=%d\n",total_char,no_line,line_char-1);

	cp=malloc(sizeof(char *)*no_line);

	int i;
	for(i=0;i<no_line;i++)
		cp[i]=malloc(line_char+1);

	for(i=0;i<no_line;i++)
	{
		fgets(cp[i],line_char+1,fp);
	}
	fclose(fp);

	fp=fopen(argv[1],"w");

	for(i=0;i<no_line;i++)
	{
		if(m!=i)
			fputs(cp[i],fp);
	}
	fclose(fp);

	fp=fopen(argv[1],"r");
	rewind(fp);
	c=fgetc(fp);
	while(c!=EOF)
	{
		printf("%c",c);
		c=fgetc(fp);
	}

}
