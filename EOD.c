#include<stdio.h>
int main()
{
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	if(num&1)
	{
		printf("number %d is odd\n",num);
	}
	else
	{
		printf("number %d is even\n",num);
	}

}
