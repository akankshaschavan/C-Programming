#include<stdio.h>
int main(){
    int a,b,ch;

    printf("Enter number:");
    scanf("%d",&a);
    printf("Enter number:");
    scanf("%d",&b);


    printf("\n1.Addition\n2.Substraction\n3.Muitiplication\n4.Division\nEnter your choise");
    scanf("%d",&ch);
    
    switch (ch)
    {
    case 1 :printf("Addition is %d",(a+b));
            break;

    case 2 :printf("Substraction  is %d",(a-b));
            break;

    case 3 :printf("Multiplication is %d",(a*b));
            break;

    case 4 :printf("Division is %d",(a/b));
    
            break;
            
    }
    return 0;
}