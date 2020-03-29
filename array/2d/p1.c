#include<stdio.h>
void print("int * , int ,int");
void print1(int(*)[3],int ,int);
main()
{
	int b[2][3]={{10,20,30},{40,50,60}};
	int i,j,r,c;
	r=sizeof (b)/sizeof (b[0]);
	c=sizeof(b[0])/sizeof(b[0][0]);
	print1(b,r,c);

}
void print1(int(*p)[3],int r, int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d",p[i][j]);
		printf("\n");
	}
}
void print(int*p,int r,int c)
{
	int i;
	for(i=0;i<r*c;i++)
		printf("%d",p[i]);
	printf("\n");
}
