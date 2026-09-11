Write a program to reverse a given number.
#include <stdio.h>
  int main()
{
  int rev,n,s=0;
printf("Enter the number:");
scanf("%d",n);
while(n>0)
{
  rev=n%10;
  s=s*10+rev;
  n/=10;
}
printf("The reverse number is=%d\n",s);
return 0;
}
