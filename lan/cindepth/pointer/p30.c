#include<stdio.h>
          #include<string.h>
        int main()
        {
            char *str = "hello, world\n";
            char strc[] = "good morning\n";
            strcpy(strc, str);
            printf("%s\n", strc);
            return 0;
        }
