#include <stdio.h>
int main()
{
int a[100],n,even,odd,i;
printf("Enter the range of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
if(a[i]%2==0)
  even=a[i];
if(a[i]%2!=0)
  odd=a[i];
}
printf("Even=%d\n",even);
printf("Odd=%d",odd);
return 0;
}
