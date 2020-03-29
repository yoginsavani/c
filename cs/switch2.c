#include<stdio.h>
main()
{
	int n1,n2,n3;
	char op;
	printf("enter the number....\n");
	scanf("%d%d",&n1,&n2);
	printf("enter the op\n + add \n - sub \n * mul \n dive \n");
	scanf("%c",&op);
	switch(op)
	{
		case '+':n3 =n1+n2;
			 printf("n3=%d\n",n3);
			 break;
		case '-':n3=n1-n2;
			 printf("n3=%d\n",n3);
			 break;
		case '*':n3=n1*n2;
			 printf("n3=%d\n",n3);
			 break;
		case '/':n3=n1/n2;
			 printf("n3=%d\n",n3);
			 break;
		default: printf(Default...\n");
	}




}




