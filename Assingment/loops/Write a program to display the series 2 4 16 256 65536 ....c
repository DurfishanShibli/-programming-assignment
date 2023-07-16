#include<stdio.h>
#include<math.h>
//Write a program to display the series 2 4 16 256 65536 ...

int main ()
{ int n,x;
	long long a=2;

	printf("Enter the number of terms: ");
	scanf("%d",&n);

printf("The series is: ");

for (x=1 ; x<=n ; x++)
{
	printf("%lld ",a);
	a = a * a;
}

}
