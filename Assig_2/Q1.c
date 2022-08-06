/*  WAP read the marks of five subjects and print their total 
	marks, average marks and percentage		*/
#include <stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	printf("Enter the marks of five subjects: \n");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	int total = (s1+s2+s3+s4+s5);
	float avg = total/5.0;
	float per = (total/5.0);
	printf("Total marks: %d \n",total);
	printf("Average marks: %.2f \n",avg);
	printf("Precentage: %.2f",per);
	return 0;
}
