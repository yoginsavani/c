#include<stdio.h>
#include<stdlib.h>
struct Date
{
int Date;
int month;
int year;
};
struct st
{
int rollno;
char name[10];
float marks;
struct Date dob;
struct Date doj;
};
main()
{
struct st s1;
s1.dob.Date =15;
s1.dob.month=10;
s1.dob.year=1994;

s1.doj.Date =15;
s1.doj.month=10;
s1.doj.year=2016;
printf("dob=%d:%d:%d \n", s1.dob.Date,s1.dob.month,s1.dob.year);
printf("doj=%d:%d:%d \n", s1.doj.Date,s1.doj.month,s1.doj.year);
}
