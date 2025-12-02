#include<stdio.h>
int main()
{
    char ch;
    printf("enter anything");
    scanf(" %c",&ch);

    if(ch>=65 && ch<=90){
        printf("Upper case");

    }
     
    else if(ch>=91 &&ch<=120){
        printf("lowercase");
    }
    else if(ch>=48 &&ch<=57){
        printf("Digit");
    }
    else{
        printf("special symbol");
    }
    return 0;
    


}