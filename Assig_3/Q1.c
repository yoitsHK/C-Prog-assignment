#include <stdio.h>
int main()
{
	float i1,i2,n;
	printf("Enter the weight of items: ");
	scanf("%f%f",&i1,&i2);
	printf("Enter the number of items: ");
	scanf("%f",&n);
	float avg = (i1+i2)/n;
	printf("Average: %.2f",avg);
	return 0;
}
