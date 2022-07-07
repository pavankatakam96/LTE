#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("Enter number to which sum is to be done\n");
	scanf("%d",&num);
	sum=num*(num+1)/2;
	printf("sum of numbers upto given number %d is %d\n",num,sum);
	/*
	 * {
	 * int i;
	 * for(i=0;i<num;i++)
	 * {
	 * sum=sum+i;
	 * }
	 * printf("sum of %d  numbers is %d\n",num,sum);
	 * }
	 *
	 *int getsum(int sum,int i)
	 {
	 if(i==0)
	 return sum;
	 else
	 return n+getsum(sum,i-1);
	 }
	 *
	 *in main --printf("%d",getsum(sum,n));
	*
		*/
}
