#include<stdio.h>
//Display Pattern of    1
//             2 2
//            3 3 3
//           4 4 4 4

int main()   {
	int x,y,a;
	a=1;

for (x= 1; x <= 4; x++)
	{
        for (y = 1; y <= 4 - x; y++)
		{
            printf(" ");
        }
        for (y = 1; y <= x; y++)
		{
            printf("%d ", a);
        }
        printf("\n");
        a++;}
}
