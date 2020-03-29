#include <stdio.h>
        void foo(int*);
        int main()
        {
            int i = 10,j=20,*p = &i;
            foo(p++);
	    foo(p);
        }
        void foo(int *p)
        {
            printf("%d\n", *p);
        }
