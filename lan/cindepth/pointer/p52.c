#include<stdio.h>
        void t1(char *q);
        main()
        {
		char *p;
		p = "abcder";
		t1(p);
        }
        void t1(char *q)
        {
		if(*q!='r')
		{
			putchar(*q);
			t1(q++);
		}
        }
	
