#include<stdio.h>
#include<malloc.h>

typedef struct st
{
	int roll;
//	char name[20];
//	float marks;
	struct st *next;
}ST;

void add_end(ST **);
void rev_data(ST **);
void rev_links(ST **);
void rev_links_2(ST **);
void print(ST *);
int count (ST *);

main()
{

	ST *hptr=0;
	char ch;

	do
	{
		add_end(&hptr);
		printf("Do you want to add new node?? (y/n)...");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');

	printf("---------------------------------\n");
	print(hptr);
	printf("\n");

	rev_links_2(&hptr);
	printf("\nAfter reversing links....\n");
	//rev_data(&hptr);
	print(hptr);
	printf("\n");

}

void add_end(ST **ptr)
{
        ST *temp = malloc(sizeof(ST));
        scanf("%d",&temp->roll);

        if(*ptr==0)
        {
                temp->next = *ptr;
                *ptr = temp;
        }
        else
        {
                ST *last=*ptr;

                while(last->next)
                last=last->next;

                temp->next = last->next;
                last->next = temp;
        }
}

void rev_links(ST **ptr)
{
	ST *temp=*ptr,**p;
	int i,c=count(*ptr);

	p=malloc(sizeof(ST *)*c);

	for(i=0;i<c;i++,temp=temp->next)
	p[i]=temp;

	p[0]->next=0;
	
	for(i=1;i<c;i++)
	p[i]->next=p[i-1];

	*ptr=p[c-1];
}

void rev_links_2(ST **ptr)
{
	static ST *q=0, *r;
	
	if(*ptr)
	{
		r=q;
		q=*ptr;
		*ptr=(*ptr)->next;
		q->next=r;
		rev_links_2(ptr);
	}

	*ptr=q;
}

int count(ST *p)
{
	int c=0;

	while(p)
	{
		c++;
		p=p->next;	
	}

	return c;
}

void rev_data(ST **ptr)
{
	int i,j,c=count(*ptr);
	printf("count=%d\n",c);

	ST *p,*q,temp;

	p=*ptr;
	for(i=0;i<c/2;i++)
	{
		for(j=0,q=*ptr;j<c-i-1;j++,q=q->next);
		
		temp=*p;
		*p=*q;
		*q=temp;

		temp.next=p->next;
		p->next=q->next;
		q->next=temp.next;

		p=p->next;
	}
}

void print(ST *ptr)
{
	if(ptr)
	{
		printf("%d\t",ptr->roll);
		ptr=ptr->next;
		print(ptr);
	}

}
