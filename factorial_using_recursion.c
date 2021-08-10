#include<stdio.h>
#include<conio.h>
 int fact(int input);
main()
{
int n;
printf("enter a number for factorial:");
scanf("%d",&n);
printf(" factorial is = %d ",fact(n));
}
int fact(int input)
{

if(input==0)
    return 1;
else
return  (input*fact(input-1));

}
