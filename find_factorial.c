#include<stdio.h>
#include<conio.h>
main()
{
int n,i,fact=1;
printf("enter a number for factorial :");
scanf("%d",&n);
for(i=n;i>=1;i--){
fact=fact*i;
}

printf(" the factorial of given number is %d ",fact);
}
