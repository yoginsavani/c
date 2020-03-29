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
void delet_node(ST **,int);
//int count(ST *);

main()
{

	ST *hptr=0;
	char ch;
	int r;

	do
	{
		add_end(&hptr);
		printf("Do you want to add another node?? (y/n)...");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');

	printf("\n------------------------------------------\n\n");
	print(hptr);

	printf("\nEnter roll number of node to be deleted....\n");
	scanf("%d",&r);
	delet_node(&hptr,r);
	printf("After deleting node...\n");
	print(hptr);
	printf("\n");

}

void add_end(ST **ptr)
{
        ST *temp=malloc(sizeof(ST));
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

void delet_node(ST **ptr, int r)
{
	ST *temp=*ptr,*last;

	while(temp)
	{
		if(r==temp->roll)
		{
			if(temp==*ptr)
			{
				*ptr=temp->next;
				temp->next->prv=0;
				free(temp);
				temp=NULL;
				return;
			}

			last->next=temp->next;
			if(temp->next)
			temp->next->prv=last;
			free(temp);
			temp=NULL;
			return;
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
