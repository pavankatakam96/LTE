#include<stdio.h>
int getsum(int sum,int i);
int main()
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	int sum=0;
	printf("sum upto %d is %d",num,getsum(sum,num));
}


int getsum(int sum,int i)
{
	if(i==0)
	{
		return sum;
	}
	else
	{
		return i+getsum(sum,i-1);
	}
}
