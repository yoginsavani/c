// Write a Program to remove a Specific line from the given text file.

#include<stdio.h>
#include<stdlib.h>

main(int argc,char **argv)
{
	char ch,**cp;
	int i,c1,max,k,c,m;
	char name[20];
	FILE *fp;

	if(argc!=3)
	{
		printf("Usage:./a.out fname line");
		return;
	}
	fp=fopen(argv[1],"r+");

	if(fp==0)
	{
		printf("file is not present");
		return;
	}

	printf("file is present");
	c1=k=max=c=0;
	while((ch=fgetc(fp))!=-1)
	{
		c++;
		c1++;
		if(ch==10)
		{
			k++;
			if(c1>max)
				max=c1;
			c1=0;
		}
	}
	rewind(fp);
	m=atoi(argv[2]);
	m=m-1;
	printf("size :%d\n line : %d\n max:%d",c,k,max-1);
	cp=malloc(sizeof(char *)*k);
	for(i=0;i<k;i++)
	{
		cp[i]=malloc(max+1);
	}
	for(i=0;i<k;i++)
	{
		fgets(cp[i],max+1,fp);
	}
	fclose(fp);
	fp=fopen(argv[1],"w");	
	for(i=0;i<k;i++)
	{
		if(m!=i)
			fputs(cp[i],fp);
	}
}
















	
	












