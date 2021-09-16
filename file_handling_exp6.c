#include<stdio.h>
void main()
{
FILE *fp;
int a,b;
fp=fopen("f1.txt","w");
printf("enter two number ");
scanf("%d %d",&a, &b);
fprintf(fp,"sum of %d and %d is %d",a,b,a+b);
fclose(fp);
}
