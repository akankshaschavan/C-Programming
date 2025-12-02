#include<stdio.h>
int main(){
    int n,i,a[100];
    float sum=0,avg;

    printf("enter the number of elements");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("sum is %.2f\n",sum);
    printf("avarage is : %.2f",avg);
    return 0;

}
//accept elements and print sum & average