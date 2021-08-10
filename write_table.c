#include<stdio.h>
#include<conio.h>
main()
{
int n,i,result;
printf("enter a number for table : ");
scanf("%d",&n);
for(i=1; i<=10;i++)
{
result=n*i;
printf(" %d*%d=%d\n",n,i,result);
}
}
