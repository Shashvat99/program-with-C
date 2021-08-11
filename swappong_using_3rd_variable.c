#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
printf("enter the value of a:");
scanf("%dn",&a);
printf("enter the value of b:");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("a is %d\n",a);
printf("b is %d",b);
}
