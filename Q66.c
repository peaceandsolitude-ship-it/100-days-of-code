#include <stdio.h>
int main() 
{
    int arr[10] = {10, 20, 30, 50, 60};
    int n = 5, key = 40, i;
    for (i = n - 1; i >= 0 && arr[i] > key; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = key;
    n++;
    for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
    return 0;
}
