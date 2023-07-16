#include<stdio.h>
//Display Pattern of   1
//            21
//           321
//          4321

int main ()
{
	int x, y ,n;


	for (x=1 ; x<=4 ; x++)
	{	for (y=1 ; y <= 4 - x ; y++)
		{
			printf(" ");
		}
	 	for (y=1 ; y<=x ; y++)
		{	printf("%d", 1 + x - y);
		}
		printf("\n");
	}

	}
