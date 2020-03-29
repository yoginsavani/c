#include<stdio.h>
#include<string.h>
main(int argc, char**argv)
{
int len;
if(argc!=2)
{
printf("Usage: /a.out string\n");
return;
}
len= strlen(argv[1]);
printf("the length of %s =%d\n",argv[1],len);
}
