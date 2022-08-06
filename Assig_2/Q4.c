/*		WAP to read a 4 digit number and print a sum of it		*/
#include <stdio.h>

int main()
{
	int n;
	printf("Enter a 4 digit number: ");
	scanf("%d",&n);
	int n1,n2,n3,n4;
	n1 = n%10;
	n2 = (n/10)%10;
	n3 = (n/100)%10;
	n4 = (n/1000)%10;
	int sum = n1+n2+n3+n4;
	printf("The sum of 4 digit number is: %d",sum);
	return 0;
}