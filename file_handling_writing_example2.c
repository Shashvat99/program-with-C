#include<stdio.h>
int main()
{
int i;
char s[100];
FILE *fp;
fp=fopen("f2.txt" ,"w");
if(fp==NULL)
{
printf("file cannot open");
exit(1);
}
printf("enter a string=");
gets(s);
for(i=0; i<strlen(s); i++)

fputc(s[i],fp);
fclose(fp);

}
