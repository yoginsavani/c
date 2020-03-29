//circular link list

#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	struct student *next;
	struct student *prev;
}ST;
void add_mid(ST **);
void print(ST *);
int main()
{
	ST *hptr=0;
	char ch;
	do
	{
		
		add_mid(&hptr);
		printf("wants to add node(y/n)?");
		scanf(" %c",&ch);
	}
	while((ch=='y')||(ch=='Y'));
		print(hptr);
}
void add_mid(ST **ptr)
{
	ST *temp=(ST *)malloc(sizeof(ST));
	static ST *last;
	printf("enter roll\n");
	scanf("%d",&temp->roll);
	if((*ptr==0)||(temp->roll<(*ptr)->roll))
	{
		temp->next=temp;
		*ptr=temp;
		last=temp;
	}
	else
	while((last->next)&&(temp->roll>last->next->roll))
	{
		last=last->next;	
	
		temp->next=last->next;
		last->next=temp;
		
			
		last=temp;
	}
}
void print (ST *ptr)
{
int c=0;
	ST *temp=ptr;
	while(1)
	{
		printf("%d-->",ptr->roll);
		ptr=ptr->next;
		c++;
	if(c>8&&ptr==temp)
			break;
	}
}

