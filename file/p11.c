// write a Program to implement sort command.
  //           (Check the command:  sort  filename.c )i


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc,char **argv)
{
        char s[200],i,l,sort;
        FILE *fp;//*grep;
	int c=0;

        if(argc!=2)
        {
                printf("Usage:short  filename");
                return;
        }
        fp=fopen(argv[2],"r");

        if(fp==0)
        {
                printf("file is not present");
                return;
        }

        printf("file is present");
        if(argv[0]==sort)

        {
                fgets(s,200,fp);
		printf("%s",fp);
	
	
                
        }


}






	
















	
	












