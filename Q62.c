#include <stdio.h>
int main()
{
int a[100],n,i,temp;
printf("Enter the range of the array:");
scanf("%d",&n);
printf("Enter the elements:");
  for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n/2;i++)
{
temp=a[i];
a[i]=a[n-1-i];
a[n-1-i]=temp;
}
for(i=0;i<n;i++)
  printf("%d",a[i]);
}
