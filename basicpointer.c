#include<stdio.h>
int main(){
    int a=10;
    int *p;
    p=&a;

    printf("value of a:%d\n",a);
    printf("address of a:%p\n",&a);
    printf("value pointed by pointer:%d",*p);
     return 0;
}