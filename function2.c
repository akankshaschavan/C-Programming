#include<stdio.h>
void add(){
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);

    printf("Addition is %d",(a+b));
}
int main(){
    add();    //function call
    return 0;
}
//no parameter and no return