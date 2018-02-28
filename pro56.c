#include<stdio.h>
//#include<stdio.h>
int main()
{
	int i;
	char str[100],b_count=0,m_count=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			b_count++;
		}
		if(str[i]>='0' && str[i]<='9')
		{
			m_count++;
		}
	}
	if((b_count && m_count)>0)
	printf("yes");
	else
	printf("no");
	return 0;
}
