#include<stdio.h>
int primefun(int num);
int primefun(int num)
{
	int i=1;
	if(num<2)
	{
		i=0;
	}
	else
	{
	for(i=2;i<num/2;i++)
		{
			if(num%i==0)
			i=0;
			break;
				
		}
	}
	return i;
}

int main()
{
	int num;
	printf("enter number to check for prime\n");
	scanf("%d",&num);
	if(primefun(num))
		{
			printf("Entered num %d is prime\n",num);
		}
	else
	{
		printf("Entered num %d is not prime\n",num);
	}


}
