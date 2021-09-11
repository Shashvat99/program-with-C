union item
{
int x;
float y;
char z;
};
main ()
{
    union item i1;
i1.x=5;
printf("\n%d",i1.x);
i1.y=3.5;
printf("\n%2f",i1.y);
i1.z='c';
printf("\n%c",i1.z);
}
