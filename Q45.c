#include<stdio.h>
int main()
{
    int n, i;
    int num = 2, den = 3;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum = sum + (float)num / den;
        num = num + 2;
        den = den + 4;
    }
    printf("Sum of the series = %.2f", sum);
    return 0;
}
