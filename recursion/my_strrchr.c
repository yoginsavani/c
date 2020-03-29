#include<stdio.h>
int my_strlen(const char*);
//char* my_strrchr(char*,char,int);
char* my_strrchr(char*,char*,char);
int main()
{
	int length;
	char s[20],ch,*p;
	printf("enter string...\n");
	scanf("%s",s);
	printf("enter character..\n");
	scanf(" %c",&ch);
	printf("%u\n",s);
	length=my_strlen(s);
	//p=my_strrchr(s,ch,length-1);
	p=my_strrchr(s,s+length,ch);
	if(p==0)
		printf("char not present...\n");
	else
		printf("present %u %c %s\n",p,*p,p);
}
int  my_strlen(const char *p)
{

	if(*p)
		return (1+my_strlen(p+1));
}
/*char* my_strrchr(char*p,char ch,int l)
  {
  if(l>=0)
  {
  if(*(p+l)==ch)
  return(p+l);
  else
  return (my_strrchr (p,ch,--l));
  }
  else
  return 0;
  }*/
char* my_strrchr(char*p,char *p1,char ch)
{
	if(p<=p1)
	{
		if(*p1==ch)
			return p1;
		else
			return (my_strrchr (p,p1-1,ch));
	}
	else
		return 0;
}
