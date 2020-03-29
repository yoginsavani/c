// Write a Program to replace the word with the reverse of that word in a given file.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc,char **argv)
{
	char ch,*cp,*p1,*p2,*p3,temp;
	int c,m,c1,c2,i,j,l;
	char s1[200],s[200],s3[500];
	FILE *fp;

	if(argc!=3)
	{
		printf("Usage:./a.out filename reverse");
		return;
	}
	fp=fopen(argv[1],"r+");

	if(fp==0)
	{
		printf("file is not present");
		return;
	}

	printf("file is present");
	c1=0;
	while((ch=fgetc(fp))!=-1)
	{
		c1++;
		p1=malloc(c1);
	}
	rewind(fp);
	strcpy(s,argv[2]);
		l=strlen(argv[2]);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	while(fscanf(fp,"%s",s1)!=-1)
		if(strcmp(s1,argv[2])==0)
		{
			fseek(fp,-l,SEEK_CUR);
			fprintf(fp,"%s",s);
		}
}

		
	

		







	
















	
	












