#include<stdio.h>
int main(){
    int n,i;
    unsigned long long fact=1;

     printf("enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial of a %d is %llu\n:",n,fact);
    return 0;

}