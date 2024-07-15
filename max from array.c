#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int i,max;
	for(i=1;i<5;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
               		
		}
		printf("%d",arr[i]);
		
		
	}

		
	return 0;
}