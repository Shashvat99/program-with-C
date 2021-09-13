#include<stdio.h>
int main()
{
int i;
char s[]="Hello Students";
FILE *fp;
fp=fopen("f1.txt","w");
if(fp==NULL){
printf("file cannot open");
exit(1);
}
for(i=0;i<strlen(s);i++)
fputc(s[i],fp);
fclose(fp);
}
