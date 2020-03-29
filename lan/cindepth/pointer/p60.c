#include <stdio.h>
        void foo(int **const p);
        int main()
        {
            int i = 10;
            int *p = &i;
            foo(&p);
            printf("%d ", *p);
        }
        void foo(int **const p)
        {
            int j = 11;
            *p = &j;
            printf("%d ", **p);
        }

