#include<stdio.h>
//Write a program to make list and find sum of n odd natural numbers
int main ()
{
	int x,n,sum;
	sum=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);

for(x=1;x<=n*2;x+=2)
{
	printf("%d ",x);
	sum=sum+x;
}
printf("\nThe sum of these %d odd natural numbers is %d",n,sum);
}
