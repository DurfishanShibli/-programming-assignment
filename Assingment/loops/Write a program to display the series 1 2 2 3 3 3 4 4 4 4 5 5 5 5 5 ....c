#include<stdio.h>
//Write a program to display the series 1 2 2 3 3 3 4 4 4 4 5 5 5 5 5 ...
int main ()
{
	int x,y,z;
	printf("Enter the number of terms: ");
	scanf("%d",&z);


for (x=1 ; x<=z ; x++)
{
	for ( y=1 ; y<=x ; y++ )
	{
		printf("%d ",x);
	}
}




}
