main()
{
int i,j;
for(i=1;i<=7;i++)
{
for(j=1;j<=7;j++)
{
if(i<=4){
if(j>4-i&&j<4+i)
printf("*");
else
printf(" ");}
if(i>4){
if(j>i-4&&j<12-i)
printf("*");
else
printf(" ");
}
}

printf("\n");}}
