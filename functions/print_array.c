#include<stdio.h>
void print_array(const int *,int);
main()
{
int a[5]={10,20,30,40,50};
int ele,i;
ele=sizeof(a)/sizeof(a[0]);
print_binary(a,ele);
printf("\n");
}
void print_binary(const int *a,int ele)
{
int i;
for(i=0;i<ele;i++)
printf("%d ",a[i]);
}
