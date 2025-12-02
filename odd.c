#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    (n&1)?printf("odd number"):printf("even number");
        

    
    return 0;
}
