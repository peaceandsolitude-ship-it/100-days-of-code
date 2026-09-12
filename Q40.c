#include<stdio.h>
int main()
{
    char bin[20];
    int i;
    printf("Enter a binary number: ");
    scanf("%s", bin);
    printf("1's complement is: ");
    for(i=0; bin[i]!='\0'; i++)
    {
        if(bin[i]=='1')
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    return 0;
}
