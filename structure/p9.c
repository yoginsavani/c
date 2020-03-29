#include<stdio.h>
struct one
{
int i;
char ch;
float f;
};
void print(int,char,float);
void abc(struct one);
void print2(struct one *);
main()
{
struct one o1={10,'a',23.50},o2;
print(o1.i,o1.ch,o1.f);
printf("--------------------------\n");
abc(o1);
printf("--------------------------\n");
print2(&o1);
}
void print(int i, char ch, float f)
{
printf("%d %c %f \n",i,ch,f);
}
void abc(struct one o1)
{
printf("%d %c %f\n",o1.i,o1.ch,o1.f);
}
void print2(struct one *p)
{
printf("%d %c %f\n",p->i,p->ch,p->f);
}


