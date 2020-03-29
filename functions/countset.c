#include<stdio.h>
int setcount(int);
int main()
{
	int num,c;
	printf("enter the number \n");
	scanf("%d",&num);
	c=setcount(num);
printf("\n");
	printf("set=%d\n",c);
printf ("clear=%d\n",32-c);
	printf("\n");

}
int setcount(int y)
{
	int i,c=0;
	for(i=31;i>=0;i--)
if(y>>i&1)
{
printf("1");
c++;
}
else
{
printf("0");
}
return c;
}

