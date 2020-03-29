 #include <stdio.h>
        void first()
        {
            printf("first");
        }
        void second()
        {
            first();
        }
        void third()
        {
            second();
        }
        void main()
        {
            void (*ptr)();
            ptr = third;
            ptr();
        }
