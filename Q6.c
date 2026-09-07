#include <stdio.h>
int main()
{
int n1,n2,temp;
printf("Enter the values for the n1 and n2");
scanf("%d",&n1);
scanf("%d",&n2);
printf("Before the swapping: n1=%d and n2=%d\n",n1,n2);
temp=n1;
n1=n2;
n2=temp;
printf("After the swapping: n1=%d and n2=%d\n",n1,n2);
return 0;
}
