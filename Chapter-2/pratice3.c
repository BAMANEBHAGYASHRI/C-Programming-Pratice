//smallest number
#include <stdio.h>
int main()
{
int  x  ,y;
printf("\nEnter the number 1 : ");
scanf("%d",&x);
printf("\nEnter the number 2 : ");
scanf("%d",&y);
printf("\nSmallest Number : \n%d ", y>x  ? x:y);
return 0;
}