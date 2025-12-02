#include<stdio.h>
#include<stdlib.h>
void swap(int *p,int *q){
    int temp=*p;
     *p=*q;
     *q=temp;
}
int main(){
    int a,b;
    system("clear");//stdlib.h
    printf("enter two numbers");
    scanf("%d%d",&a,&b);

    swap(&a,&b);
    printf("After swapping:A=%d B=%d",a,b);

}
//pointer is a varible which stores address of other variable
//use:dynamic memory allocation calloc malloc realloc free
//*:ref value
//&:ref address