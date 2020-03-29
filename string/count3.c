#include<stdio.h>
main()
{
int i,j,k;
char f[10],s[10],d[20];
printf("first string\n");
scanf("%s",f);
printf("second string\n");
scanf("%s",s);

for(i=0;f[i];i++)
{
for(j=0,k=0;s[j];j++)
d[k]=f[i];
d[k+1]=s[j];
f[i]='\0';
s[j]='\0';
}
printf("%s\n",d);
}









