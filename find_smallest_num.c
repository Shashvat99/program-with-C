main()
{
int a[10],i;
int min;
printf("enter 10 number= ");
for(i=0; i<=9; i++){
scanf("%d",&a[i]);}
min=a[0];
for(i=1; i<=9; i++)
if(min>a[i]){
min=a[i];
printf("smallest number is = %d",min);
}

}
