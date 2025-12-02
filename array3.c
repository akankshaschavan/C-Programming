#include<stdio.h>
int main(){
    //maximum number in the array
    int a[100],i,n,max;
    printf("enter n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    max=a[0];
    for(i=1;i<n;i++){
        if(max<a[i]){ //> for finnding minimum number
            max=a[i];
        }
    }
    printf("max is %d ",max);
    return 0;
}
//find 2nd max no without sorting