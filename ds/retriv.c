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
void retrive(ST **);
void rev_link(ST **);
void save(ST *);
	void print(ST *); 
void rev (ST *);
int  count (ST *);
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
	int c=count(hptr);
	printf("%d\n",c);
printf("...................................\n");

	save(hptr);
	rev(hptr);
printf(".....................................\n");
	retrive(&hptr);
	rev_link(&hptr);
printf("....................................\n");
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
void save (ST *ptr)
{
FILE *fp;
fp=fopen("data1","w");
while(ptr)
{
fprintf(fp,"%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
ptr=ptr->next;
}
}
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
void retrive(ST **ptr)
{
	FILE *fp=fopen("data1","r");
	ST temp,*new;
	temp.next=0;
	while(fscanf(fp,"%d%s%f",&temp.roll,temp.name,&temp.mark)!=-1)
	{
		new=(ST *)malloc(sizeof(ST));
		*new=temp;
		if(*ptr==0)
		{
			*ptr=new;
		//	new->next=*ptr;
		}
		else
		{
			ST *last=*ptr;
			while(last->next)
				last=last->next;
			last->next=new;
		}
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

	void print(ST *ptr)
	{
		while(ptr)
		{
			printf("%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
			ptr=ptr->next;
		}
	}






