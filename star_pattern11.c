main()
{
int i,j;
for(i=1;i<=7;i++)
{
for(j=1;j<=4;j++)
{
if(i<=4)
{
if(j<1+i)
printf("*");
else
printf(" ");
}
if(i>4)
{if(j<9-i)
printf("*");
else
printf(" ");}
}
printf("\n");
}}
