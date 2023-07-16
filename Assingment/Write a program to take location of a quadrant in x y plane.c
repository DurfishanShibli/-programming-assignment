#include<stdio.h>
//Write a program to take location of a quadrant in x y plane
int main ()

{
	int x,y;

	printf("Enter the X coordinate: ");
	scanf("%d",&x);

	printf("Enter the Y coordinate: ");
	scanf("%d",&y);


 if ( x >0 && y > 0)
printf("The point (%d,%d) lies in the First Quadrant",x,y);

else if (x < 0 && y > 0)
printf("The point (%d,%d) lies in the Second Quadrant",x,y);

else if (x < 0 && y < 0)
printf("The point (%d,%d) lies in the Third Quadrant",x,y);

else if (x > 0 && y < 0)
printf("The point (%d,%d) lies in the Fourth Quadrant",x,y);

else if (x==0 && y == 0)
printf("The point (%d,%d) lies on the Origin",x,y);

else if (x==0 && y!=0)
printf("The point (%d,%d) lies on the Y-axis",x,y);

else if (x!=0 && y==0)
printf("The point (%d,%d) lies on the X-axis",x,y);

}
