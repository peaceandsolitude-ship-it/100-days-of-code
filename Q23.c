include <stdio.h>
int main() 
{
    float cp, sp;
    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);
    if (cp <= 0 || sp < 0)
{
        printf("Invalid! Prices must be positive.");
    }
    else if (sp > cp)
{
        float profit = sp - cp;
        float percent = (profit / cp) * 100;
        printf("Profit of %.2f (%.2f%%)", profit, percent);
    }
    else if (cp > sp)
{
        float loss = cp - sp;
        float percent = (loss / cp) * 100;
        printf("Loss of %.2f (%.2f%%)", loss, percent);
}
    else 
{
        printf("No Profit, No Loss.");
    }
    return 0;
}
