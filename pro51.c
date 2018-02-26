#include<stdio.h>
int main()
{
    int digit,num,reverse=0;
    printf("enter the number");
    scanf("%d",&digit);
while(digit!=0)
{
int number=digit%10;
digit=digit/10;
reverse=reverse*10+number;
}
while(reverse!=0)
{
    int num=reverse%10;
    printf("%d\t",num);
    reverse=reverse/10;
}
    return 0;
}
