enum boolean
{
true ,false
};
enum boolean iseven(int x)
{
if (x%2==0)
return(true);
else
return (false);
}
main()
{
int n;
enum boolean result;
printf("enter a number");
scanf("%d",&n);
result=iseven(n);
if(result==true)
printf("number is even");
else
printf("number is odd");
}
