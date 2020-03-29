#include<stdio.h>
typedef struct st
{
int rollno;
char name[20];
float marks;
struct st *next;
}ST;
void add_begi(ST**)
void print(ST*)
int main()
{
char ch;
ST *headptr=0;
do
{
add_begin(&headptr);
printf("Do U want to add another node(Y or y)\n ");
scanf(" %c",&ch);
}
while((ch=='y')||(ch == 'Y'));
print(headptr);
}
void add_begin(ST**p)
{
ST *temp;
temp=malloc(sizeof(ST));
/////////////////////////////////////
printf("enter the rollno\n ");
scanf("%d",&temp->rollno);


printf("enter the name\n ");
scanf("%s",temp->name);


printf("enter the marks\n ");
scanf("%f",&temp->marks);

//////////////////////////////////////////////


}
