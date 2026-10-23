#include <stdio.h>
int main() 
{
int n, i, j, a[10][10], s = 0;
printf("Enter size: ");
scanf("%d", &n);
printf("Enter elements:\n");
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
scanf("%d", &a[i][j]);
}
}
for (i = 0; i < n; i++)
{
s += a[i][i];
}
printf("Sum = %d\n", s);
return 0;
}
