#include<stdio.h>
#include<conio.h>
main()
{
int n,i,factor;
printf("enter number for getting factor of that number:");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
factor=n%i;
if(factor==0)
printf("%d ",i);
}}
