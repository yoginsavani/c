#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
//	char name[20];
//	float mark;
	struct student *next;
}ST;
void add_end(ST **);
	void print(ST *); 
void duplicate(ST **);
int count(ST*);
int main()
{
	ST *hptr=0;
	char ch;
	do
	{
		add_end(&hptr);
		printf("do you want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}
	while((ch=='Y')||(ch=='y'));
	print(hptr);
	duplicate(&hptr);
printf("\n");
	print(hptr);
}
void add_end(ST **ptr)
{
        ST *temp=(ST *)malloc(sizeof(ST));
	//printf("enter roll,name,mark\n");
	//scanf("%d%s%f",&temp->roll,temp->name,&temp->mark);
printf("enter the roll\n");
scanf("%d",&temp->roll);
       if(*ptr==0)
        {
	temp->next=*ptr;
	*ptr=temp;
        }
        else
       { ST *last=*ptr; 
       
	while(last->next!=NULL)
	last=last->next;
	temp->next=last->next;
	last->next=temp;
}       }
 
void print(ST *ptr)
{
	while(ptr)
	{
printf("%d\n",ptr->roll);
		//printf("%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}
}





void duplicate (ST **p)
{
int i,j,c,v;
ST *temp,*temp1;
c=count(*p);
temp=*p;

while(temp->next)
{
temp1=temp->next;

if(temp->roll == temp1->roll)
{
temp->next=temp1->next;
free(temp1);
//temp1=temp->next;
continue;
}

temp=temp->next;
}
}
int count (ST *ptr)
{
int c=0;
while(ptr)
{
ptr=ptr->next;
c++;
}
return c;
}
