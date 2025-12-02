#include<stdio.h>
int main(){
    int s,m,h;
    printf("Enter hours:");
    scanf("%d",&h);
    printf("Enter minutes:");
    scanf("%d",&m);
    printf("Enter secounds");
    scanf("%d",&s);

    if(h>=0 && h<24)
    {
        if(m>=0 &&m<60)
        {
            if(s>=0 && s<60){

                printf("time is valid");
            }
            else{
                printf("secounds are invalid");
            }
        }
        else{
            printf("minutes are invalid");
        }
    }
    else{
        printf("Hours are invalid");
    }

    return 0;
}