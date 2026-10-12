#include <stdio.h>
int main() 
{
    int n = 5;
    int i, j, count;
    for (i = 1; i <= n; i += 2) 
    {
        for (j = 1; j <= i; j++) 
        {
            printf("*\n");
        }
        printf("\n");
    }
    for (i = n - 2; i >= 1; i -= 2)
    {
        for (j = 1; j <= i; j++) 
        {
            printf("*\n");
        }
        if (i > 1)
    printf("\n"); 
}
return 0;
}
