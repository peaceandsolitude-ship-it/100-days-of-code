#include <stdio.h>
int main() 
{
int n, i, j, a[10][10], d = 1;
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
for (j = i + 1; j < n; j++)
{
if (a[i][i] == a[j][j])
d = 0;
if (d)
printf("Distinct\n");
else
printf("Not Distinct\n");
}
}
return 0;
}
