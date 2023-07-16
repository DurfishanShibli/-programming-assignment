#include<stdio.h>
//Write a program to display the series 1 2 3 4 5  1 2 3 4 5  1 2 3 4 5  (n times)
int main ()
{
	int x,y,n;

	printf("The number of times do you want the series to be repeated? ");
	scanf("%d",&n);


for (x=1 ; x<=n ; x++)
	{   for (y=1 ; y<=5 ; y++)
			{
				printf("%d ",y);
			}

			printf("  ");
	}
}



