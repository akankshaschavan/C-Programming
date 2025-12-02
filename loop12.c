#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=100;i<=200;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    printf("sum of numbers form 100 to 200 is %d",sum);
    return 0;
}