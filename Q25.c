#include <stdio.h>
int main()
{
int s,dif,pro,div;
int a,b,cal;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("\nChoose an operation:\n");
printf("1.Addition\n");
printf("2.Difference\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("Enter the choice:");
scanf("%d",&cal);
switch(cal)
{
case 1:
s=a+b;
printf("The sum of two numbers are %d+%d=%d",a,b,s);
break;
case 2:
dif=a-b;
printf("The difference of the numbers are %d-%d=%d",a,b,dif);
break;
case 3:
pro=a*b;
printf("The product of the numbers are %d*%d=%d",a,b,pro);
break;
case 4:
div=a/b;
printf("The division of the numbers are %d/%d=%d",a,b,div);
break;
default:
printf("Invalid");
}
return 0;
}
