  #include<stdio.h>
	int main()
	{
		int i,n;
		char x[]="Alice",*p;
		n=strlen(x);
		*p=x[n-1];
		for(i=0;i<=n;i++)
		{
			printf("%s",p);
			p++;
		}
		printf("%s\n",p);
		return 0;
	}

