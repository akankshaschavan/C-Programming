#include<stdio.h>
int main(){
    int i,n,fact=1;

    printf("enter the value of n:");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        fact=fact*i;
    }

    printf("factorial is:%d",fact);
    return 0;
}