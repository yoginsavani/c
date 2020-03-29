#include<stdio.h>
//#include<stdlib.h>
int my_atoi (char*);
main()
{
int i;
char s[]="1234";
i= my_atoi(s);
printf("i=%d s=%s \n"i,s);
}
int my_atoi (char *p)
{
int i,n=0;
for(i=0;p[i];i++)
n=n*10+p[i]-48;
return n;

}
