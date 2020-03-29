//insenstion of node at begin(add_begin)

#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char name[20];
	float mark;
	struct student *next;    //self refrantial structure
}ST;
void add_begin(ST **);    //fun declaration
void print(ST *);
int main()
{
	ST *hptr=0;
	char ch;
	do
	{
		add_begin(&hptr);        //passing hptr
		printf("do you want to add another node(y/n)\n");
		scanf(" %c",&ch);
	}
	while((ch=='Y')||(ch=='y'));
	print(hptr);
}
void add_begin(ST **ptr)   //catching hptr
{
	ST *temp=(ST *)malloc(sizeof(ST));    //struct addresss passs to the structure temp pointr
	printf("enter roll,name,mark");
	scanf("%d%s%f",&temp->roll,temp->name,&temp->mark);
//	if(*ptr==0)

        {
         temp->next=*ptr;       //0 passs to the struct next
	*ptr=temp;}
        
        
                        //temp address pass to ptr
}
void print(ST *ptr)


{
       while(ptr)
{
	printf("%d %s %f\n",ptr->roll,ptr->name,ptr->mark);
	ptr=ptr->next;
}
}

