#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int roll;
	struct st *next;
}ST;

void add_end(ST **);
void print(ST *);
void swap_adj(ST **);
int count(ST *);

main()
{

	ST *hptr=0;
	char ch;

	do
	{
		add_end(&hptr);
		printf("Do you want to add another node?? (y/n)...");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');

	printf("\n------------------------------------------\n");
	print(hptr);

	swap_adj(&hptr);
	printf("After swapping...\n");
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

        printf("No of nodes...%d\n",c);
        return c;
}

void swap_adj(ST **ptr)
{
	int c=count(*ptr),i;
	ST *p1,*p2,*last;

	p1=*ptr;
	p2=p1->next;

	for(i=0;i<(c/2);i++)
	{
		if(i==0)
		{
			*ptr=p1->next;
			p1->next=p2->next;
			p2->next=p1;	
		}
		else
		{
			last=p1;
			p1=p1->next;
			p2=p1->next;

			last->next=p2;
			p1->next=p2->next;
			p2->next=p1;
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
