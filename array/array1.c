#include<stdio.h>
int main()
{
int ele,i;
int a[5]={10,20,30,40,50};
int b[5];
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
{
b[i]=a[i];

printf("%d ",b[i]);
}
printf("\n");


}
