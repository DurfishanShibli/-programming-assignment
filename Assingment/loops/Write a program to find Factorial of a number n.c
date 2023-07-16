#include<stdio.h>
//Write a program to find Factorial of a number n
int main ()
{
	int x,n,fact;
	fact=1;

	printf("Enter your desired number: ");
	scanf("%d",&n);

for (x=n;x>=1;x=x-1)
{
	fact=fact*x;
}
printf("The factorial of %d is : %d",n,fact);
}
