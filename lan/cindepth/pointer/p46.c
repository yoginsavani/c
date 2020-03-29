 #include<stdio.h>
              main()
	  {
		char a[]="agcdef";
		char *ptr1 = a;
		ptr1 = ptr1+(strlen(ptr1)-1);
		printf("%c\n", --*ptr1--);

		printf("%c\n",--*(--ptr1));

		printf("%c\n",--*ptr1--);

		printf("%c\n",--*(--ptr1));

printf("%c\n",*ptr1);
	}
            
