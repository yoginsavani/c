#include<stdio.h>
void print_binary(int);
int main()
{
	int num;
	printf("enter the number \n");
	scanf("%d",&num);
	print_binary(num);
	printf("\n");

}
void print_binary(int y)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d",y>>i&1);

}
