#include <stdio.h>
#include <math.h>
int main() 
{
double principal, rate, time;
double simple_interest, compound_interest;
double si_total, ci_total;
printf("Enter Principal amount: ");
scanf("%lf", &principal);
printf("Enter Annual Interest Rate (in %%): ");
scanf("%lf", &rate);
printf("Enter Time period (in years): ");
scanf("%lf", &time);
if (principal < 0 || rate < 0 || time < 0)
{
printf("Error: Values cannot be negative.\n");
return 1;
}
simple_interest = (principal * rate * time) / 100.0;
si_total = principal + simple_interest;
ci_total = principal * pow((1 + rate / 100.0), time);
compound_interest = ci_total - principal;
printf("Simple Interest:\n");
printf("  Interest Earned : $%.2lf\n", simple_interest);
printf("  Total Amount    : $%.2lf\n", si_total);
printf("\nCompound Interest (Annual Compounding):\n");
printf("  Interest Earned : $%.2lf\n", compound_interest);
printf("  Total Amount    : $%.2lf\n", ci_total);
return 0;
}
