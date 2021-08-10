#include<stdio.h>
#include<conio.h>
main()
{
int n,i,res=0;
printf("enter value of natural number for sum : ");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
res=res+i;}
printf("the sum is = %d",res);
}
