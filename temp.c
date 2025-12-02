#include<stdio.h>
//	Accept temperatures in Fahrenheit(F) and print it in Celsius(C) and Kelvin (K). (Hint: C=5/9(F- 32), K = C + 273.15) 
int main(){

    float celsius,fahrenheit,kelvin;

    printf("Enter temperature in fahrenheit:");
    scanf("%f",&fahrenheit);


    celsius=(5/9)*(fahrenheit-32);
    kelvin = celsius+273.15;
    printf("temperature in cecius:" %.2f\n,celsius);
    printf("temperature in kelvin:" %.2fk\n,kelvin);

    return 0;




}