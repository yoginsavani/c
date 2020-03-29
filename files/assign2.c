#include<stdio.h>
#include<string.h>
main(int argc,char**argv)
{

FILE *fp,*fq;
int l1=0,l=0;
char s[50],s1[50]="hey yo_savani\n";
if(argc!=3)
{
printf("Usage:./a.out filename, filename2\n");
return 0;
}
fp=fopen(argv[1],"r");
fq=fopen(argv[2],"w");
if(fp==0)
{
printf("file not present...\n");
return 0;
}
printf("enter line number...\n");
scanf("%d",&l1);
while(fgets(s,60,fp))
{
l++;
if(l==l1)
{
strcpy(s,s1);
}
fputs(s,fq);
}
}
