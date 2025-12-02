#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter anything");
    scanf(" %c",&ch);

    if(isupper(ch)){
        printf("Uppercase");

    }
    else if(islower(ch)){
        printf("Lowercase");

    }
    else if(isdigit(ch)){
        printf("digit");

        }
        else{
            printf("special symbol");
        }
    return 0;
    


}