//delete link node programme
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
//void save(ST *);
	void print(ST *); 
void rev (ST *);
void rev_link(ST **);
void delete(ST **,int);
int  count (ST *);
void deleteall(ST **);

int main()
{
	ST *hptr=0;
	char ch;
	int roll;
	do
	{
		add_end(&hptr);
		printf("do you want to add another node(y/n)?\n");
		scanf(" %c",&ch);
	}
	while((ch=='Y')||(ch=='y'));
	print(hptr);
	int c=count(hptr);
	printf("%d\n",c);

//	save(hptr);
	rev_link(&hptr);
	printf("delet a roll no");
	scanf("%d",&roll);
//	delete(&hptr,roll);
	deleteall(&hptr);
	print(hptr);
//	rev(hptr);
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
       { ST *last=*ptr; 
       
	while(last->next!=NULL)
	last=last->next;
	temp->next=last->next;
	last->next=temp;
}       }
int count(ST *ptr)
{
int c=0;
while(ptr)
{
ptr=ptr->next;
c++;
}
return c;
}
/*void save (ST *ptr)
{
FILE *fp;
fp=fopen("data1","w");
while(ptr)
{
fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
ptr=ptr->next;
}
}*/
void rev (ST *ptr)

{

//int i,j,c=count(ptr);
ST *temp=ptr;

int i,j,c=count(ptr);

for(j=0;j<c;j++)
{
	temp=ptr;
	for(i=0;i<c-j-1;i++)
	temp=temp->next;

	printf("%d %s %f\n",temp->roll,temp->name,temp->mark);
}

} 
void rev_link(ST **ptr)
{
	ST *q=0,*r;
	while(*ptr)
	{
		r=q;
		q=*ptr;
		*ptr=(*ptr)->next;
		q->next=r;
	}
	*ptr=q;
}
void delete (ST **ptr,int n)
{
	ST *temp=*ptr;
	ST *prevnode;
	printf("hello");
	while(temp)
	{
		if(temp->roll==n)
		{
			if(temp==*ptr)
			{
				*ptr=(*ptr)->next;
				free(temp);
				temp=NULL;
				return;
			}
			else
			{
				prevnode->next=temp->next;
				free(temp);
				temp=NULL;
				return;

			}
		}
		prevnode=temp;
		temp=temp->next;
	}
	printf("data does not exit");
}
void deleteall(ST **ptr)
{
	ST *temp;
	while(*ptr)
	{
		temp=*ptr;
		*ptr=(*ptr)->next;
		free(temp);
		deleteall(ptr);
	}
}
void print(ST *ptr)
{
	while(ptr)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	printf("all nodes are empty");
	}
}





