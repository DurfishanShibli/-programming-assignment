#include<stdio.h>
//Write a program to find cubes of natural numbers upto n
int main ()
{
	int x,n,cube;

	printf("How many natural numbers: ");
	scanf("%d",&n);

for (x=1;x<=n;x+=1)
{ cube=x*x*x;
printf("%d ",cube);
}
}
