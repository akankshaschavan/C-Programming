#include<stdio.h>
int main(){
    int x,y,i;
    printf("enter value of x:");
    scanf("%d",&x);
    printf("enter value of y:");
    scanf("%d",&y);

    x=(x%2==0)?x:x+1;

    for(i=x;i<=y;i+=2)
    {
        printf("%d\n",i);
    }
}
