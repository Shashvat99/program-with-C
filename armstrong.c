#include<stdio.h>
#include<conio.h>
main()
{
int n,res,rem=0,m;
printf("enter the number=");
scanf("%d",&n);
m=n;
while(m>0){
rem=m%10;
m=m/10;
res=res+rem*rem*rem;
}
if (res==n)
printf("number is armstrong");
else
    printf("number is not armstrong");

}
