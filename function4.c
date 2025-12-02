#include<stdio.h>
int add(){
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    return(a+b);
}

int main(){
    printf("Additiion is %d",add());
    return 0;
}

//no parameter and return

