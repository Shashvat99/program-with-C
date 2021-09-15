#include<stdio.h>
main()
{
FILE *fp;
char ch;
fp=fopen("f1.txt","r");
if(fp==NULL)
{
printf("file not found");
exit(1);
}
ch=fgetc(fp);
while(!feof(fp)){
printf("%c",ch);
ch=fgetc(fp);
}
fclose(fp);
}
