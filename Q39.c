Write a program to find the product of odd digits of a number.
  #include <stdio.h>
  int main()
  {
int pro=1,n,i;
printf("Enter the numbers:");
scanf("%d",&n);
for(i=1;i<=n;i+=2)
{
pro=pro*i;
}
printf("The product of odd numbers are=%d",pro);
return 0;
}
