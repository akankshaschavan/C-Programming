#include<stdio.h>
int main(){
    int x,y,choise;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);

    printf("\noptions:");
    printf("1:check if x is equal to y\n");
    printf("2:check if x is less than  y\n");

    printf("Enter your choise;");
    scanf("%d",&choise);

    switch(choise){
        case 1:if(x==y)
            printf("x is equal to y\n");
        
        else
            printf("x is not equal to y\n");
        break;

        case 2: if(x>y)
        printf("x is less y\n");

        else
        printf("x is not less than y");

        break;

        default:printf("invalid choise");

        

    }
    return 0;


    
    



}