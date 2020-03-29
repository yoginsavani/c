#include<stdio.h>
struct course
{
int courseno;
char coursename[25];
};
main()
{
 struct course c[]={
			{102,"Thermal"},
			{103,"Manufacturaing"},
			{104,"Design"}
		};
printf("%d",c[1].courseno);
printf("%s",(*(c+2)).coursename);
}
