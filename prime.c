#include<stdio.h>
int main()
{
	int num;
	printf("enter number to check for prime\n");
	scanf("%d",&num);
	int isprime=1;
	int i;
	if(num<2)
	{
		isprime=0;
	}
	else
	{
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			isprime=0;
			break;
		}

	}
	}
	if(isprime)
	{
		printf("number %d is prime",num);
	}
	else
	{
		printf("number %d is not prime",num);
	}
}



