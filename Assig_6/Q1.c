/*		factorial of given number		*/
#include <stdio.h>
int main()
{
	itn n,f=1,i;
	printf("Enter the number: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		f = f*i;
	}
	printf("Factorial = %d",f);
	return 0;
}
