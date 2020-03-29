#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	struct st *prv;
	int roll;
	struct st *next;
}ST;

void add_middle(ST **);
void delet_dup(ST **);
void print(ST *);

main()
{

	ST *hptr=0;
	char ch;

	do
	{
		add_middle(&hptr);
		printf("Do you want to add another node?? (y/n)...\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');

	printf("\n----------------------------------------------\n");
	print(hptr);

	delet_dup(&hptr);
	printf("After deleting Duplicates....\n\n");
	print(hptr);
	printf("\n");

}

void add_middle(ST **ptr)
{
	ST *temp=malloc(sizeof(ST));
	scanf("%d",&temp->roll);

	if((*ptr==0) || ((*ptr)->roll > temp->roll))
	{
		temp->next=*ptr;
		temp->prv=0;
		*ptr=temp;
	}
	else
	{
		ST *last=*ptr;

		while(last->next && (last->next->roll < temp->roll))
		last=last->next;

		temp->next=last->next;
		temp->prv=last;
		if(temp->next)
		temp->next->prv=temp;
		last->next=temp;
	}
}

void delet_dup(ST **ptr)
{
	ST *temp,*last,*p;

	last=*ptr;
	temp=last->next;

	while(temp)
	{
		if(last->roll == temp->roll)
		{
			p=temp;
			last->next=temp->next;
			if(temp->next)
			temp->next->prv=last;
			temp=last->next;
			free(p);
			p=NULL;
		}
		else
		{
			last=temp;
			temp=temp->next;
		}
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
