#include<stdio.h>
int main()
{
    int days;
    printf("Enter the number of late days: ");
    scanf("%d", &days);
    if(days > 30)
        printf("Membership Cancelled.");
    else if(days <= 5)
        printf("Library Fine = ₹%d", days * 2);
    else if(days <= 10)
        printf("Library Fine = ₹%d", (5*2) + (days-5)*4);
    else
        printf("Library Fine = ₹%d", (5*2) + (5*4) + (days-10)*6);
    return 0;
}
