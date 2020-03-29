#include<stdio.h>
struct one
{
int i;
char ch;
float f;
};
main()
{
struct one o1={10,'a',22.5};
int k=20;
printf("%d %c %f",o1.i,o1.ch,o1.f);
printf("%d\n",k);
}
