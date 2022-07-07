#include<stdio.h>
int main()
{
	int year;
	printf("Enter year to be find leap or not\n");
	scanf("%d",&year);
	if(year%400==0 || ((year%4==0)&&(year%100)!=0))
	{
		printf("Year %d is leap\n",year);
	}
	else
	{
		printf("Year %d is not leap\n",year);
	}
}

