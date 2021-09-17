main(){
int a[10],max;
printf("enter 10 number");
for(int i=0; i<=9; i++)
scanf("%d",&a[i]);
max=a[0];
for(int i=1; i<=9; i++)
if(max<a[i])
{
max=a[i];

}printf("greatest number is = %d",max);
}
