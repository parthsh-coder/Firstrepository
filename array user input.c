#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("enter any 10 number:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}