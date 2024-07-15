#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	printf("enter a number:");
	scanf("%d",&b);
	if(a>b)
	{
	
		printf("a is greater then b:%d",a);
    }
    else
    {
    	printf("b is greater then a:%d",b);
	}
	return 0;
	
}