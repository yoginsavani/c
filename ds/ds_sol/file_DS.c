#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int roll;
	char name[20];
	float marks;
	struct st *next;
}ST;

void add_end_file(ST **);
void print(ST *);

main()
{

	ST *hptr=0;

	add_end_file(&hptr);

	print(hptr);

}

void add_end_file(ST **ptr)
{
	ST new,*temp,*last;
	FILE *fp;
	fp=fopen("data","r");

	while(fscanf(fp,"%d %s %f",&new.roll,new.name,&new.marks)!=EOF)
	{
		temp=malloc(sizeof(ST));

		*temp=new;
		
		if(*ptr==0)
		{
			temp->next=*ptr;
			*ptr=temp;
			last=temp;
		}
		else
		{
			temp->next=last->next;
			last->next=temp;
			last=temp;
		}
	}
}

void print(ST *ptr)
{
	while(ptr)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}
