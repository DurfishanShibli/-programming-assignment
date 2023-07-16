#include<stdio.h>
#include<math.h>
//Write a program to display the Series 2 4 8 16 128 256 ...
int main ()
{
	int x,y,z,n;
		x=2;
		printf("Enter the number of terms: ");
		scanf("%d",&n);

for(y=1 ; y<=n ; y++)
   {   z= pow(x,y);
	   printf("%d ",z);
   }
}
