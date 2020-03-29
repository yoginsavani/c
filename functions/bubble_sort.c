#include<stdio.h>
void bubble_sort(int*,int);
void print_array(int*,int);
int main()
{
int a[10];
int ele,i;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the numbers....\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
printf("before.....\n");
print_array(a,ele);
bubble_sort(a,ele);
printf("After.....\n");
print_array(a,ele);
}
void bubble_sort(int*a,int ele)
{
int i,j,temp;
for(i=0;i<ele-1;i++)
{
for(j=0;j<ele-1-i;j++)
if(a[j]>a[j+1])
{
temp=a[j+1];
a[j+1]=a[j];
a[j]=temp;
}
}
}
void print_array(int *a,int ele)
{
int i;
for(i=0;i<ele;i++)
printf("%d ",a[i]);
}

