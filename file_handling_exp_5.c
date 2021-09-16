#include<stdio.h>
struct book
{
int bookid;
char title[20];
float price;
};
void main()
{
struct book b1;
FILE *fp;
fp=fopen("myfile.txt","rb");
if(fp==NULL)
{
printf("file not found");
exit(1);
}
fread(&b1,sizeof(b1),1,fp);
printf("%d %s %f",b1.bookid,b1.title,b1.price);
fclose(fp);
}
