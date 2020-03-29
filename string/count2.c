#include<stdio.h>
main()
{
int i,j;
char s[20],ch;
printf("enter string...\n");
scanf("%s",s);
printf("enter character \n");
scanf(" %c",&ch);
for(i=0;s[i];i++)
if(s[i]==ch)
{
for(j=i;s[j];j++)
s[j]=s[j+1];
i--;
}
printf("%s\n",s);


}

