#include<stdio.h>
#include<conio.h>
int fact(int n);
main()
{
int n;
printf("enter a number for factorial :");
scanf("%d",&n);
printf("factorial is %d",fact(n));
}
int fact(int a)
{
int i,fact=1;
for(i=a; i>1; i--)
{
fact=fact*i;
}
return fact;}
