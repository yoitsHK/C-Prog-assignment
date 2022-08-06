/*		WAP to enter two numbers and find their Addition, Subtraction		*/
#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	printf("Addition = %d \n",x+y);
	printf("Subtraction = %d",x-y);
	return 0;
}