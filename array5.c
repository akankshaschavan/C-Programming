#include<stdio.h>
int main(){
    //liner search
    //o(n)- worst case time complexity(mostly)
    //o(1)-best case time complexty
    int a[100],key,n,i,flag=0;
    printf("enter a number");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
        printf("enter key");
    scanf("%d",&key);

    
    for(i=0;i<n;i++){
        if (key==a[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("found");
    }
        
    else{
        printf("not found");
    }
    return 0;
}