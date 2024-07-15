#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	int i,low;
	for(i=0;i<5;i++)
	{
		if(low>arr[i])
		{
			low=arr[i];
		}
		printf("%d",arr[i]);
		
	}
	return 0;
}