#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int roll;
	struct st *next;
}ST;

int top=0;
void add_end(ST **);
void delet(ST **);
void print(ST *);
void push(ST **);
void pop(ST **);
void display(ST *);

main()
{

	int op;
	ST *hptr=0;

	while(1)
	{
	printf("Enter option...(1)push (2)pop (3)display (4)exit...\n");
	scanf("%d",&op);

	switch(op)
	{
		case 1: push(&hptr);break;
		case 2: pop(&hptr);break;
		case 3: display(hptr);break;
		case 4: return;
		default: printf("Unknown optiom...\n");break;
	}
	}

}

void push(ST **ptr)
{
	if(top==5)
	{
		printf("Stack overflow...\n");
		return;
	}

	add_end(ptr);
	print(*ptr);
	top++;
}

void pop(ST **ptr)
{
	if(top==0)
	{
		printf("Stack Underflow...\n");
		return;
	}

	delet(ptr);
	print(*ptr);
	top--;
}

void display(ST *ptr)
{
	print(ptr);
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

void delet(ST **ptr)
{
	ST *last=*ptr,*prv;

	while(last->next)
	{
		prv=last;
		last=last->next;
	}
	
	if(last==*ptr)
	{
		*ptr=last->next;
		free(last);
		last=NULL;
	}
	else
	{
		prv->next=last->next;
		free(last);
		last=NULL;
	}
	
}

void print(ST *ptr)
{
	while(ptr)
	{
		printf("%d-->",ptr->roll);
		ptr=ptr->next;
	}
	printf("\n");
}
