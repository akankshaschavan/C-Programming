#include<stdio.h>
#include<math.h>
int main(){
    int n,i,temp,rem,dig,r;

    printf("enter the number");
    scanf("%d",&n);

    printf("armstrong number between 1 gcc armstrongpattern13.cand %d are:\n",n);

    for(i=1;i<=n;i++){
        temp =i;
        r=0;

        dig=0;
        while(temp>0){
            dig++;
            temp /= 10;
        }

        temp=i;

        while(temp>0){
            rem=temp%10;
            r += pow(rem,dig);
            temp /= 10;


        }
        if(r==i){
            printf("%d\n",i);
        }
    }
}