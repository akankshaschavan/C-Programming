#include<stdio.h>
int main(){
    int mno;
     
    printf("enter a month number:");
    scanf("%d",&mno);
    
    switch(mno){

        case 1:printf("31 days");
        case 3:printf("31 days");
        case 5:printf("31 days");
        case 7:printf("31 days");
        case 8:printf("31 days");
        case 10:printf("31 days");
        case 12:printf("31 days");
        break;
        case 2:printf("29/28 days");
        break;

        case 4:printf("30 days");
        case 6:printf("30 days");
        case 9:printf("30 days");
        case 11:printf("30 days");
        break;
    
        default:printf("invalid month number");
        break;
    }
    return 0;


}