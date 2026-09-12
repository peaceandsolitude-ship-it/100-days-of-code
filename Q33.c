#include <stdio.h>
int main() 
{
    int n,t,rem,dig=0;
    int sum = 0, temp, power;
    printf("Enter a number: ");
    scanf("%d", &n);
     t=n;
    temp=n;
    while (temp != 0) 
    {
        dig++;
        temp/= 10;
    }
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        power = 1;
        for (int i = 1; i <= dig; i++)
        {
            power *= rem;
        }
        sum += power;
        temp /= 10;
    }
    if (n==0) 
    {
        sum = 0;
    }
    if (sum==t) 
    {
        printf("%d is an Armstrong number.\n",t);
    }
    else
    {
        printf("%d is not an Armstrong number.\n",t);
    }
    return 0;
}
