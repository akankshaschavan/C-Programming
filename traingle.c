#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter three sides of traingle:");
    scanf("%d%d%d",&x,&y,&z);

    if((x+y>z)&&(y+z>x)&&(x+z>y)){
        printf("triangle is valid\n");
    }
    else{
        printf("traingle is invalid\n");
    }
    return 0;
}