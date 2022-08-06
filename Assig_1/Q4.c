//temperature in Fahrenheit to convert to Celsius
#include <stdio.h>

int main(){
    // f = Temperature in Fahrenheit
int f;
float c;
printf("Please enter the temperature in Fahrenheit:");
scanf("%d",&f);
c=(5.0/9*(f-32));
printf("Temperature in Celsius = %.2f",c);
return 0;
}