#include <stdio.h>
int main()
{
	int ms;
	printf("Enter the time in milliseconds: ");
	scanf("%d",&ms);
	int hr = (ms/3600000)%24;
	int min = (ms/60000)%60;
	int sec = (ms/1000)%60;
	printf("%02d:%02d:%02d",hr,min,sec);
	return 0;
}