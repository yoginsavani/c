#include <stdio.h>
        void main()
        {
            char *s = "hello";
            char *n = "cjn";
            char *p = s + n;
            printf("%c\t%c", *p, s[1]);
        }
