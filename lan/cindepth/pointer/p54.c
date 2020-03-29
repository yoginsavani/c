#include <stdio.h>
        void foo( int[] );
        int main()
        {
            int ary[4] = {1, 2, 3, 4};
            foo(ary);
            printf("%d ", ary[0]);
        }
        void foo(int p[4])
        {
            int i = 10;
            p = &i;
            printf("%d ", p[0]);
        }

