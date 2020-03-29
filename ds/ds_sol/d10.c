#include<stdio.h>
#include<malloc.h>

typedef struct st
{
	struct st *prv;
	int roll;
	struct st *next;
}ST;

void add_end(ST **);
void rev_data(ST **);
void print(ST *);
int count(ST *);

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

	printf("\nAfter reversing links....\n");
	rev_data(&hptr);
	print(hptr);

}

void add_end(ST **ptr)
{
        ST *temp = malloc(sizeof(ST));
        scanf("%d",&temp->roll);

        if(*ptr==0)
        {
                temp->next=temp->prv=*ptr;
                *ptr = temp;
        }
        else
        {
                ST *last=*ptr;

                while(last->next)
                last=last->next;

                temp->next = last->next;
		temp->prv=last;
                last->next = temp;
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

		temp.prv=p->prv;
		p->prv=q->prv;
		q->prv=temp.prv;

		p=p->next;
	}
}

void print(ST *ptr)
{
	while(ptr)
	{
		printf("%d\n",ptr->roll);
		ptr=ptr->next;
	}
}
