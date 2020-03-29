#include<stdio.h>
main()
{
	struct emp
{
char name[25];
int age;
float bs;
};
struct emp e;
e.name="yogin";
e.age=22;
printf("%s %d",e.name,e.age);
}
