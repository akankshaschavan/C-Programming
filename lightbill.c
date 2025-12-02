#include<stdio.h>
int main(){
    int unit;
    float amt=0;

    printf("Enter unit:");
    scanf("%d",&unit);

    if(unit>=100){
        amt=8*100;
        unit=unit-100;

        if(unit>=100){
            amt=amt+(10*100);
            unit=unit-100;

            if(unit>=100){
                amt = amt+(12*100);
                unit=unit-100;

                if(unit>=100){
                    amt = amt+(15*100);
                    unit=unit-100;

                    if(unit>=100){
                        amt=amt+(17*100);
                        unit=unit-100;
                        if(unit>0){
                            amt=amt+(unit*20);
                        }
                    }
                    else{
                        amt=amt+(unit*17);
                    }
                    
                }
                else{
                    amt=amt+(unit*15);
                }
            }
            else{
                amt=amt+(unit*12);
            }
        }
        else{
            amt=amt+(unit*10);
        }
    }
    else{
        amt=amt+(unit*8);
    }

    printf("Total amount:%.2f",amt);
    return 0;

}