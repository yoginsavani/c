#include<stdio.h>
main()
{
	int i,num,r,temp,s,c;
	for(i=1,c=0;i<=500;i++)
	{
		temp=i;
num=i;
		for(s=0;num;num=num/10)
		{
			r=num%10;
			s=s+(r*r*r);
		}
		if(temp==s)
		{
			
			printf("%d ",temp);
		c++;
		}

	}
	printf("\n");

}

