#include<stdio.h>
//write program to display the product of series: 1 2 3 4 5 ... n
int main ()
{
	int x,n,product;
	product=1;

	printf("Enter the desired value of n: ");
	scanf("%d",&n);

printf("The product of th series ");

for (x=1;x<=n;x+=1)
{
	printf("%d ",x);
	product=product*x;
}
printf("is %d",product);
}
