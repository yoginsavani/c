#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int roll;
	struct st *next;
}ST;

void print(ST *);
void add_end(ST **);
void delet_dup(ST **);
//int count(ST *);

main()
{

	ST *hptr=0;
	char ch;
	int n;

	do
	{
		add_end(&hptr);
		printf("Do you want to add another node?? (y/n)...\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');

	printf("\n---------------------------------------------------\n");
	print(hptr);

	delet_dup(&hptr);

	printf("\nAfter deleting duplicates from unsorted...\n");
	print(hptr);

}

void add_end(ST **ptr)
{
	ST *temp=malloc(sizeof(ST));
	scanf("%d",&temp->roll);

	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		ST *last=*ptr;
		
		while(last->next)
		last=last->next;

		temp->next=last->next;
		last->next=temp;
	}
}

void delet_dup(ST **ptr)
{
	ST *last,*temp,*p;
	last=p=*ptr;
	temp=p->next;

	while(p)                                                //programm 9.....
	{
		while(temp)
		{
			if(p->roll == temp->roll)
			{
				last->next=temp->next;
				free(temp);
				temp=NULL;
				temp=last->next;
			}
			else
			{
				last=temp;
				temp=temp->next;
			}
		}
		
		p=last=p->next;
		printf("%d\n",p->roll);
		if(p->next==0)
		break;
		else
		temp=p->next;
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
