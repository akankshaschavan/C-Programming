#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter n");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            if(i%2==0)
                printf("0 ");
                else
                printf("1 ");
            
        }
        printf("\n");
    }
}