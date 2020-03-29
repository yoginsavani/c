/* For Ex: if nodes are 
  A --- B --- C --- D --- E --- F --- G --- H --- I
 then o/p should be
  B --- A --- D --- C --- F --- E --- H --- G --- I*/

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
	void swap(ST **);
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
	swap(&hptr);
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
void swap(ST **ptr)
{
	ST *p1,*p2,temp;
	p1=*ptr;
	p2=p1->next;
//	while(p2->next!=NULL)
	while(p2)
	
	{
		temp=*p1;
		*p1=*p2;
		*p2=temp;

		temp.next=p1->next;
		p1->next=p2->next;
		p2->next=temp.next;

		p1=p1->next->next;
		p2=p1->next;
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






