#include<stdio.h>
//#include<stdio.h>
main()
{
//char s[50];
int i="1234";
FILE *fp;
	//if(argc!=3)
//{
//printf("usage..../a.out fname string\n");
//return;
/}

fp=fopen("data1","w");
printf("%d",i);
fprintf(*fp,"%d",i);
/*if(fp==0)
{
printf("file not present...\n");
return;
}
printf("file present...\n");
while(fgets(s,50,fp))
	if(strstr(s, argv[1]))
printf("%s",s);*/
}

