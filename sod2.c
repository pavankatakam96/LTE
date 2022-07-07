#include<stdio.h>
 
int getSum(int num)
{
    if(num == 0){
        return 0 ;
    }
    
    int digit = num % 10;
    
    return digit + getSum(num / 10) ;
}
 
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    printf("Sum: %d", getSum(num));
    return 0;
}
