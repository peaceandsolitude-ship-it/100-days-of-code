#include <stdio.h>
int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
if(n%2==0)
{
printf("It's not a prime number");
}
else
{
printf("It's a prime number");
}
return 0;
}
