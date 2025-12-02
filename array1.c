//array is collection of similar data types
//array is continuous memory allocation
//indexing allowed
//lower bound is 0 and upper bound is n-1
//array is self pointer
//types =1-D and multi-D
//using array we can achive call by referance
//random access allowed
//syntax int a[100];
//static memory allocation is used in array
//base address+(index+size)  formula to fetch any index
//Size of integer data type is 4 byte
//why array start with 0 index?-> to access first element in array
#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("enter n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]); //accept

    printf("given data is\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]); //display
    return 0;
}