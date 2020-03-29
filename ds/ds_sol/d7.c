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
void delet_no(ST **,int);
int count(ST *);

main()
{

	ST *hptr=0;
	char ch;
	int n;

	do
	{
		add_end(&hptr);
		printf("Do you want to add another node?? (y/n)...");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');

	printf("\n------------------------------------------\n\n");
	print(hptr);

	printf("\nEnter node number from last to be deleted....\n");
	scanf("%d",&n);
	delet_no(&hptr,n);
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
                temp->next=temp->prv=*ptr;
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

void delet_no(ST **ptr, int n)
{
	ST *temp=*ptr,*last;
	int i=0, c=count(*ptr);

	while(temp)
	{	
		if(i==(c-n))
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
			i++;
			last=temp;
			temp=temp->next;
		}
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

void print(ST *ptr)
{
        while(ptr)
        {
                printf("%d\t",ptr->roll);
                ptr=ptr->next;
        }
        printf("\n");
}
