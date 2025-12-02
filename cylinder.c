#include<stdio.h>
#define PI 3.14159

int main(){
    float radius ,height;
    float surfaceArea, volume;

    printf("enter the radius of cylinder:");
    scanf("%f",&radius);

    printf("enter height of cylinder:");
    scanf("%f",&height);

    surfaceArea = 2*PI*radius*radius +2*PI*radius*height;
    volume = PI*radius*radius*height;

    printf("surface area of cylinder %.2f\n",surfaceArea);
    printf("Volume of cylinder %.2f/n",volume);

    return 0;
}