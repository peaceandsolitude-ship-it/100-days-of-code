#include <stdio.h>
int main() 
{
int n, i=1, count, sum = 0;
printf("Enter n: ");
scanf("%d", &n);
for (count = 1; count <= n; count++)
{
sum = sum + i;  
i = i + 2;         
}
printf("Sum of first %d odd numbers = %d\n", n, sum);
return 0;
}
