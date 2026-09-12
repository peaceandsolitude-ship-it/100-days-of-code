#include<stdio.h>
#include<math.h>
int main()
{
    long int n,f,l,m,res;
    int count=0,temp;
    printf("Enter a number: ");
    scanf("%ld",&n);
    temp = n;
    while(temp>0)
    {
        count++;
        temp = temp/10;
    }
    if(count == 1)
    {
        printf("After swapping first and last digit = %ld",n);
        return 0;
    }
    l=n%10;
    f=n/pow(10, count-1);
    m=(n%(int)pow(10, count-1)) / 10;
    res=l*(int)pow(10, count-1) + m * 10 + f;
    printf("After swapping first and last digit = %ld", res);
    return 0;
}
