#include <stdio.h>
int main() 
{
float units, bill;
printf("Enter electricity units consumed: ");
scanf("%f", &units);
if (units < 0) 
{
printf("Invalid input! Units cannot be negative.\n");
} 
else if (units <= 100)
{
bill = units * 5;
printf("Total Bill = ₹%.2f\n", bill);
} 
else if (units <= 200)
{
bill = (100 * 5) + (units - 100) * 7;
printf("Total Bill = ₹%.2f\n", bill);
} 
else if (units <= 300) 
{
bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
printf("Total Bill = ₹%.2f\n", bill);
} 
else
{
bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
printf("Total Bill = ₹%.2f\n", bill);
}
return 0;
}
