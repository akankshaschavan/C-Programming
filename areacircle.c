#include<stdio.h>
#define PI 3.14159

int main(){
    float radius,area,circumferance;

    printf("enter the radius of circle");
    scanf("%f",&radius);

    area = PI*radius*radius;
    circumferance = 2*PI*radius;


    printf("area of circle: %.2f\n",area);
    printf("circumferance of circle: %.2f\n",circumferance);

    return 0;
}