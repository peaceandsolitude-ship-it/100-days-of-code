#include <stdio.h>
int main() 
{
int n, i, j, a[10][10], sym = 1;
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
for (j = 0; j < n; j++)
{
if (a[i][j] != a[j][i])
sym = 0;
if (sym)
printf("Symmetric\n");
else
printf("Not Symmetric\n");
}
}
return 0;
}
