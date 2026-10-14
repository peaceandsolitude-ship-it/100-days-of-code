#include <stdio.h>
int main() 
{
int n, i, j;
printf("Enter the value of n:");
scanf("%d", &n);
for (i = 2; i <= n; i++)
{
for (j = 2; j * j <= i; j++)
if (i % j == 0) 
break;
if (j * j > i) printf("%d ", i);
}
return 0;
}
