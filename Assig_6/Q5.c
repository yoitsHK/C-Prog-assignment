/*		Y^n		*/
#include <stdio.h>
int main()
{
	int n,i,y,ans;
	printf("enter the value for Y to the power n\n Y = ");
	scanf("%d",&y);
	printf("n = ");
	scanf("%d",&n);
	ans = y;
	for (i=1;i<n;i++)
	{
		y = y*ans;
	}
	printf("Y = %d",y);
	return 0;
}