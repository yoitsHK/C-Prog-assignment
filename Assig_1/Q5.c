/*		WAP to enter any number and calculate its square root		*/
#include <stdio.h>
#include <math.h>
int main()
{
    //num = Number
	int num;
	float root;
	printf("Please enter the number: ");
	scanf("%d",&num);
	root = sqrt(num);
	printf("Square Root of number = %.2f \n",root);
	return 0;
}