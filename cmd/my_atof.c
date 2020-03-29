#include<stdio.h>
float my_atof(char*);
int main()
{
	float f;
	char s[]="23.75";
	f=my_atof(s);
	printf("%f %s",f,s);

}
float my_atof(char*p)
{
	int i,n1=0,n2=0;
	float f1,f2,f3;
	for(i=0;i<2;i++)
	{
		if(p[i])
			n1=n1*10+p[i]-48;
	}
	for(i=3;p[i];i++)
		n2=n2*10+p[i]-48;
	f1=n1;
	f2=n2;
	f2=f2/100;
	f3=f1+f2;
	return f3;
}
