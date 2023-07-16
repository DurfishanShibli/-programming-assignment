#include<stdio.h>
//Display pattern of stars     *
//                    **
//                   ***
//                  ****

int main ()
{
	int x, y ;


	for (x=1 ; x<=4 ; x++)
	{	for (y=1 ; y <= 4 - x ; y++)
		{
			printf(" ");
		}
	 	for (y=1 ; y<=x ; y++)
		{	printf("*");
		}
		printf("\n");
	}

	}
