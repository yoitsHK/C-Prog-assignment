/*		WAP to print cube of given number		*/
#include <stdio.h>

void cube(int x)
{
	printf("%d",x*x*x);
}

int main()
{
	int x;
	printf("Enter the value: ");
	scanf("%d",&x);
	cube(x);
	return 0;
}