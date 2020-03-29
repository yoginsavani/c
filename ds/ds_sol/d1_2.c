#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	struct st *prv;
	int roll;
	struct st *next;
}ST;

void add_end(ST **);
void print(ST *);

main()
{

	ST *hptr=0;
	char ch;

	do
	{
		add_end(&hptr);
		printf("Do you want to add another node?? (y/n)...\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');

	print(hptr);

}

void add_end(ST **ptr)
{
	ST *temp=malloc(sizeof(ST));
	scanf("%d",&temp->roll);

	if(*ptr==0)
	{
		temp->next=temp->prv=*ptr;
		*ptr=temp;
	}
	else
	{
		ST *last=*ptr;
		while(last->next)
		last=last->next;

		temp->next=last->next;
		temp->prv=last;
		last->next=temp;
	}
}

void print(ST *ptr)
{
	while(ptr)
	{
		printf("%d\t",ptr->roll);
		ptr=ptr->next;
	}
	printf("\n");
}
