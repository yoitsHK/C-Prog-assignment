#include <stdio.h>
#include <math.h>
int main()
{
	int s;
	printf("Enter the side of equilaterial triangle: ");
	scanf("%d",&s);
	float area = (sqrt(3)*pow(s,2))/4.0;
	printf("Area of equilaterial triangle: %.2f",area);
	return 0;
}