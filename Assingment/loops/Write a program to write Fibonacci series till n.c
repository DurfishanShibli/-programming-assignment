#include<stdio.h>
//Write a program to write Fibonacci series till n
int main ()
{
	int current, previous, next,n;
	previous= 0 ; current= 1;

	printf("The number upto which fibonacci series will be displayed: ");
	scanf("%d", &n);

	printf("%d ",current);


 	while (previous + current <= n)
 	{
 		next = previous + current ;
 		printf("%d ", next);
 		previous = current;
 		current = next;
	 }

}
