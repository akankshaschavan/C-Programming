#include<stdio.h>
int main(){
    float bs,da,hra,tax,totalSalary;
    int eid;
    char name[100]; 
    FILE *fp;

    fp =fopen("EmployeeSalary.txt","w");

    printf("enter employee details:");
    printf("\nID");
    scanf("%d",&eid);
    printf("Name:");
    scanf("%s",&name);
    printf("Basic salary:");
    scanf("%f",&bs);
    printf("DA(%%):");
    scanf("%f",&da);
    printf("HRA(%%):");
    scanf("%f",&hra);

    if (bs>100000)
    tax=20;
    else if(bs>=80000)
    tax=15;
    else if(bs>=50000)
    tax=10;
    else if(bs>=30000)
    tax=5;
    else
    tax =0;
    totalSalary=bs+((bs*(da+hra-tax))/100);
    printf("\nID:%d",eid);
    printf("\nName:%s",name);
    printf("\nBasic Salary:%.2f",bs);
    printf("\nDA:(%%):%.2f",da);
    printf("\nHRA:(%%):%.2f",hra);
    printf("\nTAX:(%%):%.2f",tax);
    printf("\nTotal Salary:(%%):%.2f",totalSalary);




return 0;



    
    

}