#include<stdio.h>
#include"number.h"
int main(){
    int ch,n;
    while(1){
        printf("\n1.factorial\n2. armstrong\n3. palindrome\n4. reverse\n5. fibonaci\n6.prime\n7. perfect\n8. Exit\nEnter a number:");
        scanf("%d",&ch)

        if(ch==8)
        return 0;
        if(ch <= 0 || ch>=9){
            printf("INVALID CHOISE");
            continue;
        }
        printf("enter a number:");
        scanf("%d",&n);

        switch (ch)
        {
        case 1:
            printf("factirial:%d",factorial(n));
            break;
            
        case 2:
        if(n==armstrong(n))
        printf("%d is a armstrong number",n);
        else
        printf("%d is not armstrong number",n);
        break;

        case 3:
        if(n==reverse(n))
        printf("%d is a palindrome number",n);
        else
        printf("%d is a not palindrome number",n);
        break;

        case 4:
        printf("reverse number is:%d",reverse(n));
        break;

        case 5:
        fibonacci(n);
        break;

        case 6:
        if(isPrime(n))
        printf("%d is a prime number",n);
        else
        printf("%d is not prime number",n);
        break;

        case 7:
        if(n == perfect(n))
        printf("%d is a perfect number",n);
        else
        printf("%d is a not perfect number",n);
        break;
        }

    }
}