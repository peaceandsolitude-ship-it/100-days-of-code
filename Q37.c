#include <stdio.h>
int main() 
{
    int a,b,temp,x,y;
    int lcm;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    x = a;
    y = b;
    while (y != 0) 
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    lcm = (a * b) / x;
    printf("LCM of %d and %d = %d\n", a, b, lcm);
    return 0;
}
