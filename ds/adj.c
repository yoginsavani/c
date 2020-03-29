//adjustant

#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[20];
	float mark;
	struct student *next;
}ST;
void add_end(ST **);
	void print(ST *); 
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
}
void add_end(ST **ptr)
{
        ST *temp=(ST *)malloc(sizeof(ST));
	printf("enter roll,name,mark\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->mark);

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
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}
}





