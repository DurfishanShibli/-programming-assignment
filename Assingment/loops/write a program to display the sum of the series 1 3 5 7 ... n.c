#include<stdio.h>
//write a program to display the sum of the series 1 3 5 7 ... n
int main ()
{
	int x,n,sum;
	sum=0;
	printf("Enter n : ");
	scanf("%d",&n);

printf("The sum of the series ");

for (x=1;x<=n;x+=2)
{
	printf("%d ",x);
	sum = sum + x;
}
printf("is %d",sum);
}
