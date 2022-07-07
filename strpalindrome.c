#include <stdio.h>
#include <string.h>

int main() 
{
    char str[10];
    printf("enter string\n");
    scanf("%s",str);
    printf("string is %s\n",str);
    int i, len, flag = 0;
    
    len = strlen(str);

    for (i = 0; i < len; i++) 
    {
        // Checking if string is palindrome or not
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("%s is not palindrome", str);
    else
        printf("%s is palindrome", str);
        
    return 0;
}

/*
 *
 * #include <stdio.h>
#include <string.h>

void lowerCase(char str[]){
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] > 64 && str[i] < 91)
      str[i] += 32;
    i++;
  }
}
int main()
{
    char str[10] = "Naman";
    int i, len, flag = 0;

    lowerCase(str);

    len = strlen(str);

    // only need to check till half of the array
    for (i = 0; i < len / 2; i++)
    {
        // Checking if string is palindrome or not.
        if (str[i] != str[len - i - 1]){
            flag++;
            break;
        }
    }

    if (flag)
        printf("String is not palindrome");
    else
        printf("String is palindrome");

    return 0;
}
*/
