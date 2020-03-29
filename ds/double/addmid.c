#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	struct student *prev;
	struct student *next;
}ST;
void add_middle(ST **);
void print(ST *);
int main()
{
	ST *hptr=0;
	char ch;
	do
	{
		add_middle(&hptr);
		printf("wants to add another node?\n");
		scanf(" %c",&ch);
	}
	while((ch=='Y')||(ch=='y'));
	print(hptr);
}
void add_middle(ST **ptr)
{
	ST *temp=(ST *)malloc(sizeof(ST));
	printf("enter the data");
	scanf("%d",&temp->roll);

	if((*ptr==0)||(temp->roll<(*ptr)->roll))
	{
		temp->prev=0;
		temp->next=(*ptr);
		*ptr=temp;
	   
	}
	else
	{
		ST *last=*ptr;
		while((last->next)&&(temp->roll>last->next->roll))
				last=last->next;
				temp->next=last->next;
				last->next=temp;
				last=temp->prev;
				temp->next=temp;
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
