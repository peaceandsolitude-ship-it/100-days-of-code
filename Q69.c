#include <stdio.h>
int main() 
{
int arr[] = {10, 50, 20, 40, 30};
int n = 5, i;
int max = arr[0], second = -1;
for (i = 1; i < n; i++) 
{
if (arr[i] > max)
{
second = max;
max = arr[i];
}
else if (arr[i] > second && arr[i] < max)
{
second = arr[i];
}
}
printf("Second largest: %d\n", second);
return 0;
}
