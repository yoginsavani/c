#include<stdio.h>
#include<stdlib.h>
int main(int argc,char**argv)
{
int m;
FILE *fp;
char ch,*cp,c;
if(argc!=2)
{
printf("Usage= ./a.out file name");
return 0;
}
fp=fopen(argv[1],"r+");
if(fp==0)
{
printf("file not present...\n");
return 0;
}
c=fgetc(fp);
while(c!=EOF)
{
printf("%c",c);
c=fgetc(fp);
}
rewind(fp);
///////////////////////////////////////////
c=0;
while((ch=fgetc(fp))!=-1)
c++;
rewind(fp);
cp=malloc(c);
////////////////////////////////////////////////
while(fscanf(fp,"%s",cp)!=-1)
{
 for(m=0;cp[m];m++);
 cp[0]=cp[0]&~(32);
	fseek(fp,-m,SEEK_CUR);
	fputs(cp,fp);
}
fclose(fp);
////////////////////////////////////////
fp=fopen(argv[1],"r");

c=fgetc(fp);
while(c!=EOF)
{
printf("%c",c);
c=fgetc(fp);
}
rewind(fp);
}






