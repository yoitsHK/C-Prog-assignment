/*		palindrome or not		*/
#include <stdio.h>
int main()
{
	int r,n,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	int orig = n;
	while (n!=0)
	{
		r = n%10;
		sum = sum*10+r;
		n = n/10;
	}
	if (orig == sum)
	{
		printf("Number is palindrome\n");
	}
	else
	{
		printf("Not palindrome");
	}
	return 0;
}