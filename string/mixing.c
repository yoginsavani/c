#include<stdio.h>
int main()
{
char s1[10],s2[10],s3[20];
int i,j,k;
printf("enter first string...\n");
scanf("%s",s1);
printf("enter second string...\n");
scanf("%s",s2);
printf("before strings...%s  %s",s1,s2);
printf("\n");
for(i=0,j=0,k=0;s1[i]||s2[j];)
{
if(s1[i])
{
s3[k++]=s1[i];
i++;
}
if(s2[j])
{
s3[k++]=s2[j];
j++;
}
s3[k]='\0';
}
printf("After string %s\n",s3);
}
