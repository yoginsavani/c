// replacement a char

#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	char ch, *p;
	//char s[20];
	FILE *fp;
	int c=0,i;
	if(argc!=4)
	{
		printf("Usage:./a.out sf ch ch");
		return;
	}
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file is not present");
		return;
	}
	printf("file is present");
	while((ch=fgetc(fp))!=-1)   //start to end of file checking 
		c++; // counting a char by char in a file
	rewind(fp); //now again beginig point 
	p=malloc(c+1);  //c+1 is used for \0
	i=0;
	while((ch=fgetc(fp))!=-1)  //file to arry
		p[i++]=ch;
	p[i]='\0';
	rewind(fp);
	printf("%s\n",p);
	for(i=0;p[i];i++) //process is replacement
		if(p[i]==argv[2][0])
			p[i]=argv[3][0];

	printf("%s\n",p);

}
