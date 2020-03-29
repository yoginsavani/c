#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int roll;
	struct st *next;
}ST;

void print(ST *);
void add_end(ST **);
void swap_k(ST **,int);
int count(ST *);

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

	printf("Enter the node number to swap...\n");
	scanf("%d",&n);
	swap_k(&hptr,n);

	printf("\nAfter 'K'th node swapping...\n");
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

int count(ST *p)
{
	int c=0;
	while(p)
	{
		c++;
		p=p->next;
	}

//	printf("No of nodes...%d\n",c);
	return c;
}

void swap_k(ST **ptr, int n)
{
	int c=count(*ptr),i;

	ST *temp,*temp1,*last,*last1,*t;
	temp=temp1=last=last1=*ptr;

	if(n==1 || n==c)
	{
		while(last->next)
		{
			last1=last;
			last=last->next;
		}

		last1->next=temp;
		*ptr=last;
		last->next=temp->next;
		temp->next=0;
	}
	else
	{
		if(c%2)
		{
			if(n==(c/2+1))
			return;
		}

		for(i=0;i<n-1;temp=temp->next,i++)
		temp1=temp;

		for(i=0;(c-i)>n;last=last->next,i++)
		last1=last;

		temp1->next=last;
		last1->next=temp;

		t=temp->next;
		temp->next=last->next;
		last->next=t;
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
