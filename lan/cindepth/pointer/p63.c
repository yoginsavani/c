#include <stdio.h>
        void main()
        {
            char *a[10] = {"hi", "hello", "how"};
            int i = 0, j = 0;
            a[0] = "hey";
            for (i = 0;i < 10; i++)
            printf("%s  ", a[i]);
        }
