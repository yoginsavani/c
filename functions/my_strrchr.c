#include<stdio.h>
char* my_strrchr(char*,char);
int main()
{
	char s[20],ch,*p;
	printf("enter string...\n");
	scanf("%s",s);
	printf("enter character..\n");
	scanf(" %c",&ch);
	printf("%u\n",s);
	p=my_strrchr(s,ch);
	if(p==0)
		printf("char not present...\n");
	else
		printf("present %u %c %s\n",p,*p,p);
}
char* my_strrchr(char*p,char ch)
{
int i;
for(i=0;p[i];i++);
for(i=i-1;i>=0;i--)
{
if(p[i]==ch)
return p+i;
}

return 0;
}
