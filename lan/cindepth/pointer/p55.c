#include <stdio.h>
        void main()
        {
            int k = 5;
            int *p = &k;
            int **m  = &p;
             **m = 10;
            printf("%d%d%d\n", k, *p, **m);
        }
