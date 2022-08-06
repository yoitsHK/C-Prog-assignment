/*		WAP enter length and breath of a rectangle and find its area	*/
#include <stdio.h>
int main()
{
	int l,b;
	printf("Enter the length and breath: ");
	scanf("%d%d",&l,&b);
	int area = l*b;
	printf("Area: %d",area);
	return 0;
}
