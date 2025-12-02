#include<stdio.h>
#include<limits.h>
void fun()
{
    static int x=10;
    printf("%d\n",x);
    x++;
}
int main(){
    int i,j;
    for(i=0;i<5;i++){
        fun();//function call
    }
}