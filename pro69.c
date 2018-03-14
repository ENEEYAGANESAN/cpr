#include<stdio.h>
//#include<conio.h>
int main()
{
    int n,m,a;
    printf("enter the number");
    scanf("%d%d",&n,&m);
    a=n-m;
    if(a%2==0)
    {
        printf("even number\n");
}
else
{
    printf("odd number\n");
}
return 0;
}
