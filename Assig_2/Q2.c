  /*	WAP to print square of given number		*/
#include <stdio.h>

void squar(int x)
{
	printf("%d",x*x);
}

int main()
{
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	squar(x);
	return 0;
}