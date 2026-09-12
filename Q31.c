#include <stdio.h>
int main() 
{
    int num, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Binary equivalent: 0");
        return 0;
    }
    printf("Binary equivalent: ");
    while (num > 0) 
    {
        binary[i] = num % 2;   
        num = num / 2;
        i++;
    }
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    return 0;
}
