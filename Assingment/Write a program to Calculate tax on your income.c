#include<stdio.h>
//Write a program to Calculate tax on your income
int main ()
{
    int x;

	printf("Enter you income: ");
	scanf("%d", &x);

if (x<=150000)
   	{printf("The tax amount on your income is 0");
   	}
else if (x>150000;x<=300000)
   	{printf("The tax amount on your income is %d",x/10);
   	}
else if (x>300000;x<=500000)
	{printf("the tax amount on your income is %d",x*2/10);
	}
else if (x>500000)
 	{printf("The tax amount on your income is %d",x*3/10);
	 }
}
