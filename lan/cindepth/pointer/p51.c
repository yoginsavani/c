#include <stdio.h>
        void f(char *k)
        {
            k++;
            k[2] = 'm';
            printf("%c\n", *k);
        }
        void main()
        {
            char s[] = "hello";
            f(s);
            printf("%s\n",s);
        }
