u#include<stdio.h>
main()
{
int i;
char s[20];
FILE  *fp;
printf("enter the string...\n");
scanf("%s",s);
fp=fopen("data1","w");
fprintf(fp,"%s",s);
}

