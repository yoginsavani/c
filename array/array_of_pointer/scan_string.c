#include<stdio.h>
main()
{
char s[5][10];
int i;
printf("enter the string...\n");
for(i=0;i<5;i++)
scanf("%s",s[i]);

printf("---------------\n");
for(i=0;i<5;i++)
printf("%s\n",s[i]);
}
