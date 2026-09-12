#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0.0f, numerator, denominator;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        numerator = 2 * i - 1;
        if (i == 1)
        {
            denominator = 1;
        }
        else
        {
            denominator = 2 * i;
        }
        sum = sum + numerator / denominator;
    }
    printf("Sum of the series = %.2f", sum);
    return 0;
}
