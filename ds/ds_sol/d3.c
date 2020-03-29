#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	struct st *prv;
	int roll;
//	char name[20];
//	float marks;
	struct st *next;
}ST;

void print(ST *);
void merg_nodes(ST **,ST **);
void add_end(ST **);

main()
{

	ST *h1=0,*h2=0;
	char ch;

	printf("For 1st single link list...\n");
	do
	{
		add_end(&h1);
		printf("Do you want to add another node>> (y/n)...\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');

	printf("For 2nd single linked list...\n");
	do
	{
		add_end(&h2);
		printf("Do you want to add another node>> (y/n)...\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');

	printf("--------------------------------------------------------\n");
	printf("1st link...\n");
	print(h1);
	printf("2nd link...\n");
	print(h2);

	merg_nodes(&h1,&h2);
	printf("\nAfter merging...\n");
	print(h1);

}

void add_end(ST **ptr)
{
	ST * temp;
	temp=malloc(sizeof(ST));
	//scanf("%d %s %f",&temp->roll,temp->name,&temp->marks);
	scanf("%d",&temp->roll);

	if(*ptr==0)
	{
		temp->prv=0;
		temp->next=*ptr;
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

void merg_nodes(ST **p1,ST **p2)
{
	ST *temp1=*p1, *temp2=*p2;

	while(1)
	{
		if(temp1->next)
		temp1=temp1->next;
		if(temp2->next)
		temp2=temp2->next;
	
		temp2->prv->next=temp1->prv->next;
		temp2->prv->prv=temp1->prv;
		temp1->prv->next=temp2->prv;
		temp1->prv=temp2->prv;

		if((temp1->next && temp2->next)==0)
		{
			if(temp1->next==0)
			{
				temp1->next=temp2;
				break;
			}
			if(temp2->next==0)
			{
				temp2->next=temp1;
				temp2->prv=temp1->prv;
				temp1->prv->next=temp2;
				break;
			}
		}
	}
}

void print(ST *ptr)
{
	while(ptr)
	{
		//printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		printf("%d\t",ptr->roll);
		ptr=ptr->next;
	}
	printf("\n");
}
