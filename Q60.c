#include <stdio.h>
int main()
{
int a[100],n,pos,neg,zero;
printf("Enter the range of array");
scanf("%d",n);
printf("Enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==0)
  zero=a[i];
else if(a[i]>0)
  pos=a[i];
else
  neg=a[i];
}
printf("Positive=%d\n Negative=%d\n Zero=%d\n",pos,neg,zero);
return 0;
}
