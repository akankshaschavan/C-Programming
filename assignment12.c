#include<stdio.h>
int main(){
    int x,y,z,max;
    printf("Enter any three numbers");
    scanf("%d%d%d",&x,&y,&z);

    if (x>y && x>z){
        printf("Maximum number is x:%d",x);
    }
    else if(y>x && y>z){
        printf("maximum no is y:%d",y);
    }
    else{
        printf("maximum no is z:%d",z);
    }
}