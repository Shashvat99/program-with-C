#include<stdio.h>
main()
{
int n,i,j;
printf("enter number of rows ");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
for(j=1; j<=n; j++){
        if(j>=6-i)
printf("*");
else
printf(" ");
}
printf("\n");}
}
