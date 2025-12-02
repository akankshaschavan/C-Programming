#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter n:");
    scanf("%d",&n);

    for(i=2;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf("sum of numbers form 2 to %dis %d\n ",n,sum);

    return 0;
}