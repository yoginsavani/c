#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	struct student *prev;
	struct student *next;
}ST;
void add_begin(ST **);
void print(ST *);
int main()
{
	ST *hptr=0;
	char ch;
	do
	{
		add_begin(&hptr);
		printf("wants to add another node?\n");
		scanf(" %c",&ch);
	}
	while((ch=='Y')||(ch=='y'));
	print(hptr);
}
void add_begin(ST **ptr)
{
	ST *temp=(ST *)malloc(sizeof(ST));
	printf("enter the data");
	scanf("%d",&temp->roll);

	if(*ptr==0)
	{
		temp->prev=temp->next=(*ptr);
		*ptr=temp;
	}
	else
	{
		temp->next=*ptr;
		temp->prev=0;
		*ptr=temp;
		temp->next->prev=temp;
	}
}
void print(ST *ptr)
{
	ST *temp;
	while(ptr)
	{
		printf("%d-->",ptr->roll);
		ptr=ptr->next;
	}
	printf("\n");
}
