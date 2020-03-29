#include<stdio.h>
int main()
{
int i;
char s[10];
printf("enter the string...\n");
scanf("%s",s);
printf("%s \n",s);

for(i=0;s[i]!='\0';i++)
printf("%c ",s[i]);
printf("\n");






}
