#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    b = a;
    if(c>b)
    b = c;


 printf("the maximum number is:%d",b);

return 0;
}
