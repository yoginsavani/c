#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct st
{
	int rollno;
	char name[20];
	float marks;
	struct st *next;
}ST;
	void add_middle(ST**);
	void reverse_links(ST**);
	void print(ST*);
	int count (ST*);
	void rev_data(ST*ptr);
int main()
{
	int c;
	char ch;
	ST *headptr=0;
	do
	{
		add_middle(&headptr);
		printf("Do U want to add another node(Y or y)\n ");
		scanf(" %c",&ch);
	}
	while((ch=='y')||(ch == 'Y'));
//	c=count(headptr);
//	printf("%d\n",c);
	print(headptr);
	reverse_links(&headptr);
	printf("........................\n");
	print(headptr);
	rev_data(headptr);
	printf("...............\n");
	print(headptr);
}
void add_middle(ST **p)
{
	ST *temp,*temp1;
	temp=malloc(sizeof(ST));
	/////////////////////////////////////
	printf("enter the rollno\n ");
	scanf("%d",&temp->rollno);


	printf("enter the name\n ");
	scanf("%s",temp->name);


	printf("enter the marks\n ");
	scanf("%f",&temp->marks);

	//////////////////////////////////////////////
	if(*p==0 || temp->rollno<(*p)->rollno)
	{
		temp->next=*p;
		*p=temp;
	}
	else
	{
		temp1=*p;
		while(temp1)
		{
			if(temp1->next==0||temp1->next->rollno>temp->rollno)
			{
				temp->next=temp1->next;
				temp1->next=temp;
				break;
			}
			temp1=temp1->next;
		}
	}
}
void print(ST*ptr)
{
	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}

int count(ST*ptr)
{	
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}
void reverse_links(ST**ptr)
{
	ST**p,*temp;
	int c,i=0;
	c=count(*ptr);
	p=malloc(sizeof(ST*)*c);
	temp=*ptr;
	while(temp)
	{
		p[i++]=temp;
		temp=temp->next;
	}
	for(i=c-1;i>0;i--)
		p[i]->next=p[i-1];
	p[0]->next=0;
	*ptr=p[c-1];
}

void rev_data(ST*ptr)
{
ST v;
ST **p;
int i=0,j,c;
c=count(ptr);
p=malloc(sizeof(ST*)*c);
while(ptr)
{
p[i++]=ptr;
ptr=ptr->next;
}
for(i=0,j=c-1;i<j;i++,j--)
{
v.rollno = p[i]->rollno;
strcpy(v.name,p[i]->name);
v.marks=p[i]->marks;


p[i]->rollno = p[j]->rollno;
strcpy(p[i]->name,p[j]->name);
p[i]->marks=p[j]->marks;


p[j]->rollno = v.rollno;
strcpy(p[j]->name,v.name);
p[j]->marks=v.marks;
}


}




