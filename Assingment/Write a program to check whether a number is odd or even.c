#include<stdio.h>
//Write a program to check whether a number is odd or even
int main ()
{
	int x, y;
	printf("Enter the number: ");
	scanf("%d",&x);
	y=x%2;
if (y==0)
    printf("The number %d is even",x);
else
    printf("The number %d is odd",x);    }
