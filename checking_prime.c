#include<stdio.h>
#include<conio.h>
main()
{
int n,i,count=0;
printf("enter a number to check prime or not:");
scanf("%d",&n);

for (i=1;i<=n; i++)
{
    if(n%i==0)
        count++ ;
        }
    if (count==2)
    printf("number is  prime");
    else
    printf("number is  not prime");
}

