#include<stdio.h>
int main()
{
    float units, bill = 0;
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);
    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else if (units <= 300)
    {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }
    printf("Electricity Bill = ₹ %.2f", bill);
   return 0;
}
      
