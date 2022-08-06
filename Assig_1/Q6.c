// Calculate Tringle area
#include <stdio.h>

int main(){
    // l = Length Of Tringle, b = Hight Of Tringle , a = area
int  l,h;
float a;
printf("Please enter the length of Tringle: ");
scanf("%d",&l);
printf("Please enter the Hight of Tringle: ");
scanf("%d",&h);
a = (l*h)/2.0;
printf("Area of Tringle = %.2f\n",a);
return 0;
}