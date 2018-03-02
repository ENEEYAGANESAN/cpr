#include<stdio.h>
//#include<conio.h>
int main()
{
    int i,n,f=0;
    printf("enter the value");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
    f++;
break;
}
if(f==0)
{
printf("prime");
}
else
{
    printf("no");
}
return 0;
}
