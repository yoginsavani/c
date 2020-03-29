#include <stdio.h>
        int main()
        {
            char *a[2] = {"hello", "hi"};
            printf("%s\n", *(a + 1));
            return 0;
        }
