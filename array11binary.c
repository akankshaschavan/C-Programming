#include<stdio.h>
int main(){
    int arr[100],n,key,i,j,flag,mid,low,high;

    printf("enter size of array:");
    scanf("%d",&n);

    printf("array is:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("enter the key:");
    scanf("%d",&key);

    flag=0;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;

    if(arr[mid]==key)
    {
        flag=1;
        break;
    }
    else if(arr[mid]<key){
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
}
if(flag)
{
    printf("key found");
}
else
{
    printf("key not found");
}
return 0;

}