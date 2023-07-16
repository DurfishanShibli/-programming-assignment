#include<stdio.h>
//Display Pattern of 1
//           22
//           333
//           4444

int main()
{
	int x,y,a;
	a=1;

for (x = 1; x <= 4; x++)
	{
        for (y = 1; y <= x; y++)
		{
            printf("%d", a);
        }
        printf("\n");
        a++;}
}
