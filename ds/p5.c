// Write a Singly linked list program to delete a perticular according to any signature of a given structure


#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[20];
	float mark;
	struct student *next;
}ST;
void add_end(ST **);
int count (ST *);
void delete_dup(ST **);
//	void swap(ST **);
	void print(ST *); 
int main()
{
	ST *hptr=0;
	char ch;
	do
	{
		add_end(&hptr);
		printf("do you want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}
	while((ch=='Y')||(ch=='y'));

	print(hptr);
	int i=count(hptr);
	printf("....................\n");
	delete_dup(&hptr);
	
//	swap(&hptr);
	print(hptr);
}
void add_end(ST **ptr)
{
	ST *temp=(ST *)malloc(sizeof(ST));
	printf("enter roll,name,mark\n");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->mark);

	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		ST *last=*ptr; 

		while(last->next!=NULL)
			last=last->next;
		temp->next=last->next;
		last->next=temp;
	} 

}
int count (ST *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}
void delete_dup(ST **ptr)
{
	ST *last,*temp,*p;
	last=p=*ptr;
	temp=p->next;

	while(p)                                               
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
				temp=last->next;
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
                printf("%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
                ptr=ptr->next;
        }
}



