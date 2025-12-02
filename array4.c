#include<stdio.h>
//for finding minimum number in the array
int main(){
    int a[100],i,n,min;
    printf("enter a value of n");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];

    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("min is %d",min);
}