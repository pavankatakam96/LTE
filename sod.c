#include<stdio.h>
int main()
{
	int num;
	printf("enter number to get sum of digits of it\n");
	scanf("%d",&num);
	int sum=0;
	int count=0;
	while(num!=0)
	{
		sum=sum+num%10;
		num=num/10;
		count++;
	}
	printf("sum of digits  is %d and no.of digits are %d",sum,count);
}


