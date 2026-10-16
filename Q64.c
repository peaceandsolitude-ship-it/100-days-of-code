#include <stdio.h>
int main() 
{
    int num = 122333, count[10] = {0}, i, max = 0, digit = 0;
    if (num < 0) num = -num;
    if (num == 0) count[0] = 1;
    while (num > 0)
    {
        count[num % 10]++;
        num = num / 10;
    }
    for (i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            digit = i;
        }
    }
    printf("Digit %d occurs %d times\n", digit, max);
    return 0;
}
