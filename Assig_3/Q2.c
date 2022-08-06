#include <stdio.h>
int main()
{
	int id,hr;
	printf("Enter your employee's ID: ");
	scanf("%d",&id);
	printf("Enter your work Hr: ");
	scanf("%d",&hr);
	float salary = hr*60.50;
	printf("Your employee's ID: %d \n",id);
	printf("Your salary: $%2.f",salary);
	return 0;
}