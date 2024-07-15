#include<stdio.h>
int main()
{
	int i=1;
	char j='*';
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(i==1||i==10||j==1||j==10)
			{
				printf("%c\t",'*');
			}
			else if (i==5 && j==6)
			{
				printf("%c\t",'p');
			}
			else
			{
				
			}
		}
	}
	return 0;
}