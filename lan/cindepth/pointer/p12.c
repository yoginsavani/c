#include <stdio.h>
        void main()
        {
            char *s= "hello";
            char *p = s + 2;
            printf("%c\t%c", *p, s[1]);
        }
