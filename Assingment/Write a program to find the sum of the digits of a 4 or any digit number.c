#include <stdio.h>
//Program to find the sum of the digits of a 4 or any digit number
int main()
{
   int x, y, sum , remainder;
   sum=0;

   printf("Enter an integer: ");
   scanf("%d", &x);

   		y = x;

while (y != 0)
   {
      remainder = y % 10;
      sum = sum + remainder;
      y = y / 10;
   }

   printf("Sum of the digits of %d = %d \n", x, sum);                }
