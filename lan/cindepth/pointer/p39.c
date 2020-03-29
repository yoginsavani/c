 #include<stdio.h>
	int main()
	{
		void *p;  
                      int  **ptr;  
                      int a = 129;
		p = &a;  
                      ptr = &p;
		printf(" p = %d   p = %u  &p = %u\n", *p, p, &p);
           }
