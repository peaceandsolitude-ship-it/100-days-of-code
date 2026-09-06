#include <stdio.h>
int main() 
{
int n1, n2;
printf("Enter the values of n1 and n2=");
scanf("%d%d",&n1, &n2);
printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
num1 = num1 + num2;
num2 = num1 - num2;
num1 = num1 - num2;
printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
return 0;
}
