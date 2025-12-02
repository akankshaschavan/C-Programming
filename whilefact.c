#include<stdio.h>
int main(){
    int n ,fact=1;

    printf("Enter vaue of n:");
    scanf("%d",&n);
     while(n>=2){
        fact=fact*n;
        n--;
     }
     printf("factorial is %d",fact);
}