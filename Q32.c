#include <stdio.h>
int main() 
{
    int n,t,r= 0,rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    t=n;
    while (n != 0) 
    {
        rem = n % 10;
        r=r*10+rem;
        n=n/10;
    }
    if (t==r)
    {
        printf("%d is a palindrome number.\n",t);
    } else
    {
        printf("%d is not a palindrome number.\n",t);
    }
    return 0;
}
