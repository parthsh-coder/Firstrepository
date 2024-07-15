#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int i,ec,oc,s1=0,s2=0;
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			ec+=1;
			s1+=arr[i];
		}
		else
		{
			oc+=1;
			s2+=arr[i];
		}
		
	}
	printf("%d\t%d\t%d\t%d\t",ec,oc,s1,s2);
	return 0;
}