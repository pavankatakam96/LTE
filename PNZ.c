#include<stdio.h>
void main()
{
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	if(num>=0)
	{
		if(num%2==0)
		{
			printf("Number %d is positive even number\n",num);
		}
		else
		{
			printf("Number %d is positive odd number\n",num);
		}
	}
	else
	{

		if(num%2==0)
		{
			printf("Number %d is Negative even number\n",num);
		}
		else
		{
			printf("Number %d is Negative odd number\n",num);	
		}
	}


	
}
	
