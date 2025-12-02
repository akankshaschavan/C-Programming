#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>c)
    printf("max is %d",a);

    else if(b>a && b>c)
    printf("max is %d",b);

    else
    printf("Max is %d",c);
    

return 0;
}
