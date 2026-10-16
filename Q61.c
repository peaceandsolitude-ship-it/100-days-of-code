#include <stdio.h>
int main() 
{
int arr[] = {10, 20, 30, 40, 50};
int n = 5,k =40,i; //change the value of the k and the index will be displayed according.
for (i = 0; i < n; i++)
{
if (arr[i] == k)
{
printf("Element found at index %d\n", i);
return 0;
}
}
printf("Element not found\n");
return 0;
}
