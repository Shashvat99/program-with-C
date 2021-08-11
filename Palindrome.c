#include<stdio.h>
#include<conio.h>
main()
{
int n,res=0,rem,m;
printf("enter the number for checking palindrome");
scanf("%d",&n);
m=n;
while(m>0)
{
rem=m%10;
m=m/10;
res=res*10+rem;
}
if(n==res)
printf("number is palindrome");
else
printf("number is not palindrome");
}
