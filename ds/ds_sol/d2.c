#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
        struct st *prv;
        int roll;
        struct st *next;
}ST;

void add_middle(ST **);
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

        print(hptr);

}

void add_middle(ST **ptr)
{
	ST *temp=malloc(sizeof(ST));
	scanf("%d",&temp->roll);

	if((*ptr==0) || (temp->roll < (*ptr)->roll))
	{
		temp->prv=0;
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		ST *last=*ptr;

		while((last->next != 0) && (last->next->roll < temp->roll))
		last=last->next;

		temp->next=last->next;
		temp->prv=last;
		last->next=temp;
		if(temp->next)
		temp->next->prv=temp;
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
