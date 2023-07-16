#include<stdio.h>
//Display Pattern of 1
//           12
//           123
//           1234

int main ()
{
	int x, y ,n;


	for (x=1 ; x<=4 ; x++)
	{	for (y=1 ; y<=x ; y++)
		{	printf("%d",y);
		}
		printf("\n");
	}

	}
