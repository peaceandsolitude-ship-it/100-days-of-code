#include <stdio.h>
int main()
{
 int area,peri,len,wid;
 printf("Enter the values of length and width=");
 scanf("%d%d",&len,&wid);
 area=len*wid;
 printf("The area of rectangle is %2d*%2d=%2d\n",len,wid,area);
 peri=2*(len+wid);
 printf("The perimeter of the rectangle is 2*(%2d+%2d)=%2d",len,wid,peri);
 return 0;
}
