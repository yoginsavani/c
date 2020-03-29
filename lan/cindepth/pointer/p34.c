 #include <stdio.h>
        int main()
        {
            char *str = "hello world";
            char strary[] = "hello world";
            printf("%d %d\n", sizeof(str), sizeof(strary));
            return 0;
        }
