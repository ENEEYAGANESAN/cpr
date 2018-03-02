#include<stdio.h>
int main()
{
    char str[100];
    int a,co=0,c=0;
    printf("enter the string");
    scanf("%s",str);
    for(a=0;str[a]!='\0';a++)
    {
        co++;
    }
    printf("%d",co);
    for(a=0;a<co;a++)
    {
    if(str[a]=='0' || str[a]=='1')
    {
        c++;
    }
    }
printf("%d",c);
if(c==co)
{
    printf("yes");
}
else
{
    printf("no");
}
return 0;
}
