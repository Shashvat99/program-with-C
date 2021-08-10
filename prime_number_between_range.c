#include<stdio.h>
#include<conio.h>
int prime(int input);
main()
{
int a,b,i;
printf("enter the lower limit ");
scanf("%d",&a);
printf("enter the higher limit");
scanf("%d",&b);
for(i=a; i<b; i++)
{
if (prime(i))
printf("%d ",i);
}
}
int prime(int input)
{
int i;
for(i=2; i<input; i++)
{
if (input%i==0)
break;
}
if(i==input)
return 1;
else
return 0;
}
