#include<stdio.h>
int main(){
    long cnt=0,n;

    printf("Enter a n:");
    scanf("%d",&n);

    while(n>0){
        cnt++;
        n=n/10;
    }
    printf("count of digit is:%d",cnt);
}