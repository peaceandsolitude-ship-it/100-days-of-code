#include <stdio.h>
int main()
{
float a,b,c;
int equi,iso,right;
printf("Enter the value of a,b,c=");
scanf("%f%f%f",&a,&b,&c);
if(a<=0 || b<=0 || c<=0)
{
printf("Invalid triangle");
return 0;
}
if(a+b<=c || a+c<=b || b+c<=a)
{
printf("The given sides of the invalid triangle is %2f,%2f,%2f\n",a,b,c);
}
else
{
printf("It's an valid triangle\n");
equi=(a==b && b==c);
iso=(a==b || b==c || a==c);
right=((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a));
}
if(equi)
{
printf("The given sides is of equitorial triangle\n");
}
else if(iso)
{
printf("The triangle is isoceles triangle\n");
}
else
{
printf("The given sides is of right triangle\n");
}
return 0;
}
