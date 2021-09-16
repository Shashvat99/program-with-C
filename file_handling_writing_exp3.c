#include<stdio.h>
main()
{
FILE *fp;
char str[20];
fp=fopen("f1.txt","a");
if(fp==NULL)
{
printf("file not found");
exit(1);
}
printf("enter your name");
gets(str);
fputs(str,fp);
fclose(fp);
}
