#include<stdio.h>

//main program
int main ()
{
  //variables initialization
  int num, reverse = 0, rem;
  printf("enter number to be reversed\n");
  scanf("%d",&num);
  printf("The number is: %d\n",num);
 

  //loop to find reverse number
    while(num != 0)
    {
      rem = num % 10;
      reverse = reverse * 10 + rem;
      num /= 10;
    }
 
  //output
  printf("Reverse: %d\n",reverse);
  
  return 0;
}
