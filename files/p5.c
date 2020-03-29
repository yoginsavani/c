#include<stdio.h>
#include<string.h>
main(int argc,char**argv)
{
	FILE *fp;
	int i,j;
	char temp,s[10],s1[10];
	if(argc!=3)
	{
		printf("Usage: ./a.out fname string\n");
		return 0;
	}
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file not present...\n");
		return 0;
	}
	strcpy(s,argv[2]);
	for(i=0;s[i];i++);
	for(i=i-1,j=0;i>j;i--,j++)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	while (fscanf(fp,"%s",s1)!=-1)
	{
		if(strcmp(s1,argv[2])==0)
		{
			fseek(fp,-strlen(argv[2]),SEEK_CUR);
			fprintf(fp,"%s",s);
		}
	}
}
