/*		WAP to perform swap of two numbers		*/
#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers: \n");
	scanf("%d%d",&x,&y);
	printf("Before change\nx = %d\ny = %d\n\n",x,y);
	x = x+y;
	y = x-y;
	x = x-y;
	printf("After change\nx = %d\ny = %d",x,y);
	return 0;
}