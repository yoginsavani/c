
#include<stdio.h>
//#include<string.h>
//#include<stdio.h>
void prin(char*);
int main()
{
        char s[]="abcd";
        prin(s);
      printf("\n");
}
void prin(char*p)
{
        if(*p)
        {
              
                prin(p+1);
           printf("%c ",*p);
}
}

