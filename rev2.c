#include<stdio.h>
int getReverse(int num,int rev);
int getReverse(int num, int rev)
{
if(num == 0)
return rev;

int rem = num % 10;
rev = rev * 10 + rem;

return getReverse(num / 10, rev);
}

//main program
int main ()
{
int num, rev = 0;
printf("Enter number\n");
scanf("%d",&num);
printf("The number is: %d\n",num);

printf("Reverse: %d", getReverse(num, rev));
}
