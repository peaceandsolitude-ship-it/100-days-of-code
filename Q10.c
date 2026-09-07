#include <stdio.h>
int main()
{
long totsec;
int hr,min,sec;
printf("Enter the time in seconds=");
scanf("%ld",&totsec);
if(totsec<0)
{
printf("The time cannot be negative");
return 1;
}
hr = totsec/3600;
min = (totsec%3600)/60;
sec = totsec%60;
printf("The converted time is=%02d:%02f:%02d\n");
return 0;
}
