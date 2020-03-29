#include<stdio.h>
int main()
{
char a[50];
int i,j;
char ch=' ';
printf("enter the string....\n");
scanf("%[^\n]",a);

for(i=0;a[i];i++)
{
if(a[i]==ch&&a[i+1]==ch)
{
for(j=i+1;a[j];j++)
a[j]=a[j+1];
j--;
}
}
printf("string..%s",a);
}
