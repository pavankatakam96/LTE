// Palindrome program in C
#include<stdio.h> 

// Palindrome is a number that is same if read forward/backward
// Ex : 12321
int main ()
{
    int num, reverse = 0, rem, temp;
    printf("Enter number\n");
    scanf("%d",&num);
    printf("The number is :%d\n",num);
 
    temp = num;
    
    //loop to find reverse number
    while(temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    };
    
    // palindrome if num and reverse are equal
    if (num == reverse)
        printf("%d is Palindrome\n", num);
    else
        printf("%d is Not Palindrome\n", num);

}


/*
 *
 *
 *
// Recursive way to find reverse of a number
int getReverse(int num, int rev){
    if(num == 0)
        return rev;

    int rem = num % 10;
    rev = rev * 10 + rem;

    return getReverse(num / 10, rev);
}

int main ()
{
    int num, reverse = 0;
    num=12321;
    printf("The number is: %d\n",num);

    // palindrome if num and reverse are equal
    if (num == getReverse(num, reverse))
        printf("%d is Palindrome\n", num);
    else
        printf("%d is Not Palindrome\n", num);

}*/


