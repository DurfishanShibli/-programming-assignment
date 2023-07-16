#include<stdio.h>
//Write a program to make multiplication table of any desired integer
int main ()
{
	int x,y,product;
	printf("Enter the number here: ");
	scanf("%d",&x);
	product=1;

for(y=1;y<=20;y+=1)
{
	product=x*y;
	printf("%d * %d = %d\n" ,x,y,product);
}
}
