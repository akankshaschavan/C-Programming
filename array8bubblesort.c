#include<stdio.h>
int main(){
    int i,j,a[100],n,temp;

    printf("enter the number");
    scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){ //time complexity of bubble sort o(n^2) i.e 10*10=100
            if(a[j]>a[j+1]){  //basically not used in larger input size because of time compexity
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("sorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

}