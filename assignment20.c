#include<stdio.h>
int main(){
    char ch;
    printf("enter a character:");
    scanf(" %c",&ch);

    if(ch>='A' && ch<='Z'){
        ch =ch+32;
        printf("converted to lowercase:%c",ch);
    }
    else if(ch>='a',ch<='z'){
        ch=ch-32;
        printf("converted to uppercase:%c",ch);
    }
    else{
        printf("not alphabet");
    }
    return 0;
}