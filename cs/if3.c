/*w.a.p. to scan a no. and bit positon from the user after that display a menu for set a bit, clear bit and complement bit and scan an option from the user acording to the option provided by the user perform the task and display the result*/ 
#include<stdio.h>
main()
{
	int num,pos,op,c=0;
	printf("enter the number...\n");
	scanf("%d",&num);
	abc:
	printf("enter the position...\n");
	scanf("%d",&pos);
	if(pos>=0 && pos<=31)
	{
		printf("enter option\n1)set\n2)clear\n3)comp\n");
		scanf("%d",&op);
		if(op==1)
		{
			num= num|1<<pos;
			printf("num=%d\n",num);
		}
		else if(op==2)
		{
			num=num&~(1<<pos);
			printf("num=%d\n",num);
		}
	else if(op==3)
	{	
	num=num^1<<pos;
	printf("num=%d\n",num);
	}		
		else
			printf("unknown option...\n");
	}
	else
	{
		c++;
		printf("wrong pos as input \n");
		if(c<3)
			goto abc;
	}
}
