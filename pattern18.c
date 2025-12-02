#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("%d ",j);
        }

        for(k=1;k<i;k++){
            printf("%d ",k);
        }

        printf("\n");
    }

}
/*
1 2 3 4 5 
2 3 4 5 1
3 4 5 1 2
4 5 1 2 3
5 1 2 3 4

*/