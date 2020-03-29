#include<stdio.h>
main()
{
struct value
{
	int bit1:1;
	int bit3:4;
	int bit4:4;
}bit={1,2,2};
printf("%d %d %d",bit.bit1,bit.bit3,bit.bit4);



}
