#include <stdio.h>
        int main()
        {
            int a[4] = {1, 2, 3, 4};
            void *p = &a[1];
            void *ptr = &a[2];
            int n = 1;
            n = ptr - p;
            printf("%d\n", n);
        }
