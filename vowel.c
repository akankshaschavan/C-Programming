#include<stdio.h>
int main(){
    char ch;
    printf("enter a lowercase character form user");
    scanf("%c", &ch);

    if(ch>='a' && ch<='z'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            printf("character is vowel :%c",&ch);
        }
        else{
            printf("character is consonant:%c",&ch);
        }
    }
    else{
        printf("Invalid character:%c",&ch);
    }
    return 0;
}