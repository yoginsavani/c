// Write a Program to meges the lines from two files and store the result into another file

#include<stdio.h>
#include<stdlib.h>

main(int argc,char **argv)
{
	char ch,*cp,*p1,*p2,*p3;
	int c,m,c1,c2;
	char s1[200],s2[200],s3[500];
	FILE *fp1,*fp2,*fp3;

	if(argc!=4)
	{
		printf("Usage:./a.out sf1 sf2 desti");
		return;
	}
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"r");

	if((fp1==0)&&(fp2==0))
	{
		printf("file is not present");
		return;
	}

	printf("file is present");
	c1=0;
	while((ch=fgetc(fp1))!=-1)
	{
		c1++;
		p1=malloc(c1);
	}
	rewind(fp1);
	c2=0;
	while((ch=fgetc(fp2))!=-1)
	{
		c2++;
		p2=malloc(c2);
	}
	rewind(fp2);

	fp3=fopen(argv[3],"w");


	p3=malloc(c1+c2);
	while((fgets(s1,c1+1,fp1)!=0)) 
	{	
		fputs(s1,fp3);
		if((fgets(s2,c2+1,fp2)!=0)) 
			fputs(s2,fp3);
	}	
	while((fgets(s2,c2+1,fp2)!=0)) 
		fputs(s2,fp3);
}
	

		







	
















	
	












