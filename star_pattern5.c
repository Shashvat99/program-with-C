#include<stdio.h>
main()
{
int n,i,j;
printf("enter the number of rows");
scanf("%d",&n);
for(i=1;i<=n; i++)
{
for(j=1; j<=9; j++){
if(j>5-i&&j<5+i)
printf("*");
else
printf(" ");}
printf("\n");}}
