#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter rows:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i==j)
            printf("1");
            else
            printf("0");
        }

        printf("\n");
    }
}
/*

1
01
001
0001
00001
000001
0000001
00000001
000000001


*/