#include<stdio.h>
int primefun(int n);
int main()
{
        int a,b,i;
        int flag;
        printf("Enter ranges for finding no.of prime numbers between them\n");
        scanf("%d %d",&a,&b);
        // swap n1 and n2 if n1 > n2
  if (a > b)
  {
    a =a+b;
    b = a-b;
    a = a-b;
  }
printf("Prime numbers between %d and %d are: ", a,b);
for (i=(a+1);i<b;++i)
  {
	  // flag will be equal to 1 if i is prime
   	 flag = primefun(i);
    if (flag == 1)
    {
      printf("%d ",i);
    }
  }

        return 0;
}

int primefun(int n)
{
	int count=1;
	int j;
	for(j=2;j<=n/2;++j)
	{
		if(n%j == 0)
		{
			count=0;
			break;
		}
	}
	return count;
}

