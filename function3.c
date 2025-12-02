
#include<stdio.h>
void add(int a,int b){
    printf("addition is %d",(a+b));
}

int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    add(a,b); 
    return 0;
}

//parameter and no return