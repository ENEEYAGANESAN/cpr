#include<stdio.h>
//#include<conio.h>
int main()
{
    int n1=0,n2=1,n3,n,count=0;
    printf("enter the n \n");
    scanf("%d",&n);
    printf("first %d fibonacci numbers are........ \n",n);
    printf("%d\n",&n1);
    printf("%d\n",&n2);
    count=2;
    while(count<n)
    {
    n3=n1+n2;
    count++;
    printf("%d\n",&n3);
    n1=n2;
    n2=n3;
    }
    return 0;
}
