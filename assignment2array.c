#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("enter the number");
    scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     //assume first element as largest and smallest
     int l=a[0];
     int s=a[0];
     //traverse array
     for(i=1;i<n;i++){
        if(a[i]>l){
            l=a[i];
        }
        if(a[i]<s){
            s=a[i];
        }

     }
     printf("largest number=%d\n",l);
     printf("smallest number=%d",s);
}
//find smallest and largest number