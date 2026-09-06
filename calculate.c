#include <stdio.h>
int main()
{
  int a,b,s=0,diff,pro,quo;
printf("Enter the of value of a and b");;
scanf("%d%d",&a,&b);
s=a+b;
printf("The sum of %d+%d=%d\n",a,b,s);
diff=a-b;
printf("The difference of %d-%d=%d",a,b,diff);
pro=a*b;
printf("The product of %d*%d=%d",a,b,pro);
quo=a/b;
printf("The quotient of %d/%d=%d",a,b,quo);
return 0;
}
