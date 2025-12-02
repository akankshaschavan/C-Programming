#include<stdio.h>
int add(int a,int b){
    return(a+b);
}
int main(){
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    printf("addition is %d",add(a,b));
    return 0;
}
//parameter and return(imp)


//function is a block of code used to perform specific task
//written once use many times
//we can written only one value at a time
