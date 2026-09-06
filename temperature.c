#include <stdio.h>
int main()
{
    float cel,faren;
    printf("Enter the values of celsius=");
    scanf("%f",&cel);
    faren=(cel*9.0/5.0)+32;
    printf("%2f cel= %2f faren\n",cel,faren);
    return 0;
}
