#include <stdio.h>
int main() 
{
int arr[] = {1, 2, 3, 4, 5};
int n = 5, k = 2, i;
int temp[5];
k = k % n;
for (i = 0; i < n; i++)
temp[(i + k) % n] = arr[i];
for (i = 0; i < n; i++) 
{
arr[i] = temp[i];
printf("%d ", arr[i]);
}
return 0;
}
