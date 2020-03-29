#include<stdio.h>
void strrrev(const char*,char*)
int main()
{
char s[10],d[10];
int i,j;
printf("enter string\n");
scanf("%s",s);
printf("before....%s",s);
printf("\n");
for(i=0;s[i];i++);
for(i=i-1,j=0;i>=0;i--,j++)
d[j]=s[i];
d[j]='\0';
printf("after.......%s\n",d);

}
