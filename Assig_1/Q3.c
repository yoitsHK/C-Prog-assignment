/*		WAP enter the radius of a circle and find its area		*/
#include <stdio.h>
int main()
{
	int r;
	printf("Enter the radius: ");
	scanf("%d",&r);
	float area = r*r*3.14;
	printf("Area = %.2f",area);
	return 0;	
}