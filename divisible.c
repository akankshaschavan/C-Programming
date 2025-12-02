#include<stdio.h>
int main(){
    int m;
    printf("Enter a number:");
    scanf("%d",&m);

    if(m%5==0 || m%7==0){
        printf("number is divisible by 5 or 7:%d",m);
    }
    else{
        printf("number is not divisible by 5 or 7:%d",m);
    }
    return 0;
}