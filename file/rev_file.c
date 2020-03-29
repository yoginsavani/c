// Write a Program to reverse the Contents of a given file.

#include<stdio.h>
#include<stdlib.h>
main()
{
        char ch,*p,temp;
        int c=0,c1=0,i=0,l1=0,j,k=0;
        FILE *fp;

        fp = fopen("data","r");
        if(fp==0)
        {
                printf("file not present\n");
                return;
        }

        while((ch = fgetc(fp))!=-1)
        {
                c++;
        }

        p = malloc(sizeof(char )*c);


        rewind(fp);


        i=0;
        while((ch=fgetc(fp))!=-1)
                p[i++]=ch;
        p[i]='\0';

        printf("%s",p);

        for(i=0,j=c-1;i<j;i++,j--)
        {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
        }

        printf("%s",p);

        fp=fopen("data","w");

        fprintf(fp,"%s",p);


}
                                                                  
