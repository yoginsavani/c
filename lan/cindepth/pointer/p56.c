 #include <stdio.h>
        int main()
        {
            int a = 1, b = 2, c = 3;
            int *ptr1 = &a, *ptr2 = &b, *ptr3 = &c;
            int **sptr = &ptr1; 
	    printf("%d  ",**sptr);
            *sptr = ptr2;
	    printf("%d  ",**sptr);
        }

