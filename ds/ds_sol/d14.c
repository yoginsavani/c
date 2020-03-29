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
int palindrom(ST **);
int count(ST *);

main()
{

	ST *hptr=0;
	char ch;
	int res;

	do
	{
		add_end(&hptr);
		printf("Do you want to add another node?? (y/n)...\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');

	printf("\n---------------------------------\n");
	print(hptr);
	printf("---------------------------------\n");

	res=palindrom(&hptr);

	if(res==1)
	printf("Given link list IS PALINDROME ...\n");
	else
	printf("Given link list is NOT PALINDROME...\n");

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

int count(ST *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}

	return c;
}

int palindrom(ST **ptr)
{
	ST *temp,*last;
	int i,c=count(*ptr),j;

	temp=*ptr;

	for(i=0;i<c/2;i++)
	{
		for(j=0,last=*ptr;j<c-i-1;j++,last=last->next);

		if(temp->roll != last->roll)
		return 0;
		else
		//if(temp->roll == last->roll)
		temp=temp->next;
	}

	if(i==c/2)
	return 1;
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
