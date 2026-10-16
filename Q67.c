#include <stdio.h>
int main() 
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, pos = 2, key = 25, i; 
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = key;
    n++;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
