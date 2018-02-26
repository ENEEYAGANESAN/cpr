#include<stdio.h>
int main()
{
    int d,n,rev=0;
    printf("enter the number");
    scanf("%d",&d);
while(d!=0)
{
int n=d%10;
d=d/10;
rev=rev*10+n;
}
while(rev!=0)
{
    int n=rev%10;
    printf("%d\t",n);
    rev=rev/10;
}
    return 0;
}
