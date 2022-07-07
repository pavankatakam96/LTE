#include<stdio.h>
int main()
{
	int a,b,sum=0;
	int i;
	printf("Enter number ranges a&b\n");
	scanf("%d %d",&a,&b);
	for(i=a;i<b;i++)
	{
		sum=sum+i;
	}
	printf("sum of numbers within range %d-%d is %d",a,b,sum);
}
//
//sum=(b*(b+1)/2)-(a*(a+1)/2)+a;
//
//
//
//using recursion....
//int getsum(int sum,int n,int b)
//{
//if(n>b)
//{
//return sum;
//}
//else
//{
//return n+getsum(sum,n+1,b);
//}
//
//
//
