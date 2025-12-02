#include<stdio.h>
int main(){
    char ch;
    printf("enter a character:");
    scanf(" %c",&ch);

    switch(ch){
        case 'A'...'Z' :printf("Capiptal letter");
        break;
        case 'a'...'z' :printf("small letter");
        break;
        case '0'...'9' :printf("digit");
        break;

        default: printf("special symbol");
    }
    return 0;

}