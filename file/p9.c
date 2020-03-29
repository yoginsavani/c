// Write a Program to implement grep command. 
  //          ( Check the command:  grep  searching_word  filename.c 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc,char **argv)
{
	char s[200],grep;
	FILE *fp;//*grep;

	if(argc!=3)
	{
		printf("Usage:grep   word filename");
		return;
	}
	fp=fopen(argv[1],"r");

	if(fp==0)
	{
		printf("file is not present");
		return;
	}

	printf("file is present");
	if(argv[0]==grep)
	
	{
		fgets(s,200,fp);
		if(strstr(s,argv[2]))
		printf("%s",s);
	}

	
	
}

		
	

		







	
















	
	












