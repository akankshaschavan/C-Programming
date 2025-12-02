#include<stdio.h>
int main(){
    int a[100],*p,i,n;
    p=&a[0];
    printf("enter n");
    scanf("%d",&n);

    for(i=0;i<n;i++)//accept
    scanf("%d",&p[i]);

    printf("given data is\n");

    for(i=0;i<n;i++)
    printf("%d",p[i]);//display

    return 0;
}