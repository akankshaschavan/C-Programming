#include<stdio.h>
//occurance of the number
int main(){
    int a[100],n,i,key,cnt=0;

    printf("enter a element");
    scanf("%d",&n);

    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
        printf("enter the key");
        scanf("%d",&key);
    

    for(i=0;i<n;i++){
        if(key==a[i]){
           cnt++;
        }
    }
    if(cnt==0){
        printf("not found");
    }
    else{
        printf("found %d times",cnt);
    }
    return 0;
}
    
