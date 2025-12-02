#include<stdio.h>
int main(){
    int rev=0,n;

    printf("enter a number:");
    scanf("%d",&n);

    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reverse no is:%d",rev);
    return 0;
}