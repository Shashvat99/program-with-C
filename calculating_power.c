#include<stdio.h>
#include<conio.h>
main()
{
int a,b,i,res=1;
printf("enter number for power calculating:");
scanf("%d",&a);
printf("enter the value of power:");
scanf("%d",&b);
for(i=1; i<=b; i++)
{
res=res*a;
}
printf("%d",res);
}
