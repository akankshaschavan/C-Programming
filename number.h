#include<stdio.h>
#include<math.h>
int factorial(int n){
    int fact =1;
    while (n>=2)
    {
        fact *=n;
        n--;
    }
    return fact;   

    int armstrong(int n){
        int temp,cnt=0;
        float result=0;
        temp=n;
        while(n>0){
            cnt++
            n /= 10;

        }
        n=temp;
        while (n>0)
        {
            int rem =n%10;
            result = result +pow(rem,cnt);
            n/=10;
        }
        return result
        
    }
    int reverse(int n){
        int rev=0;
        while(n>0){
            int rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        return revt;
    }
    void fibonacci(int n){
        int a=0,b=1,c;
        int i;

        if(n==1)
        ptintf("%d",a);
        else if(n>=2){
            printf("%d %d",a,b);
            for(i=2;i<n;i++){
                c=a+b;
                printf("%d",c);
                a=b;
                b=c;
            }
        }
    }

    int isPrime(int n){
        int i;
        if(n<=1)
        return 0;
        if(n==2 || n==3)
        return 1;
        if(n%2==0 || n%3==0)
        return 0;
        for(i=5;i<sqrt(n);i+=6){
            if(n%i==0 || n%(i+2)==0)
            return 0;
        }
        return 1;
    }

    int perfect(int n){
        int i,sum=0;
        for(i=1;i<=n/2;i++){
            if(n%i==0)
            sum+=i;
        }
    }
    return 0;
    
}