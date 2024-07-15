#include<stdio.h>
#define PASSMARK 40
#define MIN 10
int main()
{
	int marks;
	printf("enter your marks:");
	scanf("marks=%d",&marks);
	if(marks>=PASSMARK)
	{
		printf("result : PASS");
	}
	else
	{
		printf("result : FAIL");
	}
	return 0;
	
} 