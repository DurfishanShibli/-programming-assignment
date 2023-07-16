#include<stdio.h>
//Write a program to display the sum of the series 1 2 3 4 5 ... n
int main ()
{
	int x,n,sum;
	sum=0;
	printf("Enter n : ");
	scanf("%d",&n);

printf("The sum of the series ");

for (x=1;x<=n;x+=1)
{
	printf("%d ",x);
	sum = sum + x;
}
printf("is %d",sum);
}
