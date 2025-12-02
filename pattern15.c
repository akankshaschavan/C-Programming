#include<stdio.h>
int main(){
    int i,j,k,n;

    printf("enter value of n");
    scanf("%d",&n); 
    
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            if(i==n|| j==1)
                printf("#");
            else
            printf("*");
        } 
        printf("\n");
    }

}

/*
######
#****
#***
#**
#*
#


*/