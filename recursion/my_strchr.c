#include<stdio.h>
char* my_strchr(char*,char);
int main()
{
	char s[10],ch,*p;
	printf("enter string...\n");
	scanf("%s",s);
	printf("enter character..\n");
	scanf(" %c",&ch);
	printf("%u\n",s);
	p=my_strchr(s,ch);
	if(p==0)
		printf("char not present...\n");
	else
		printf("present %u %c %s\n",p,*p,p);
}
char* my_strchr(char*p,char ch)
{
	if(*p)
	{
		if(*p==ch)
			return p;
		else
			return(my_strchr (p+1,ch))
	}
	else
		return 0;
}
