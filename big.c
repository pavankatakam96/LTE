#include<stdio.h>
int main()
{
	int a,b,c;
	int result;
	printf("Enter numbers that to be compared\n");
	scanf("%d%d%d",&a,&b,&c);
	result=((a>b)&&(a>c))?a:(b>c)?b:c;
	printf("%d is big among %d,%d,%d\n",result,a,b,c);
}



