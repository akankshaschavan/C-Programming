#include<stdio.h>
#include<math.h>
int main(){

    int p1id,p2id,p3id,p1qty,p2qty,p3qty,dis;
    char p1name[100],p2name[100],p3name[100];
    float p1price,p2price,p3price;
    float total;
    FILE*fp;
    fp=fopen("productbill.txt","w");
     printf("Enter 1st product info");
     printf("\nID");
     scanf("%d",&p1id);
     printf("\nName");
     scanf("%s",&p1name);
     printf("\nquantity:");
     scanf("%d",&p1qty);
     printf("\nPrice:");
     scanf("%f",&p1price);

     printf("Enter 2 ndproduct info");
     printf("\nID");
     scanf("%d",&p2id);
     printf("\nName");
     scanf("%s",&p2name);
     printf("\nquantity:");
     scanf("%d",&p2qty);
     printf("\nPrice:");
     scanf("%f",&p2price);

     printf("Enter 3rd product info");
     printf("\nID");
     scanf("%d",&p3id);
     printf("\nName");
     scanf("%s",&p3name);
     printf("\nquantity:");
     scanf("%d",&p3qty);
     printf("\nPrice:");
     scanf("%f",&p3price);
     total=(p1qty*p1price)+(p2qty*p2price)+(p3qty*p3price);
     if(total>=100000)
     {
        dis=20;
     }
     else if(total>=80000)
     {
        dis=15;
     }
     else if(total>=50000)
     {
        dis=10;
     }
     else{
        dis=5;
     }

     fprintf(fp,"--------------------------------------------------------------------------------------\n");
     fprintf(fp,"------------------------------------BILL----------------------------------------------\n");
     fprintf(fp,"----------------------------------------------------------------------------------------\n");
     fprintf(fp,"Product ID\t\tProduct Name\t\tProduct qty\t\tproduct price\n");
     fprintf(fp,"%d\t\t\t%s\t\t\t\f%d\t\t\t\t%f",p1id,p1name,p1qty,p1price);
     fprintf(fp,"%d\t\t\t%s\t\t\t\f%d\t\t\t\t%f",p2id,p2name,p2qty,p2price);
     fprintf(fp,"%d\t\t\t%s\t\t\t\f%d\t\t\t\t%f",p3id,p3name,p3qty,p3price);

    fprintf(fp,"--------------------------------------------------------------------------------------\n");
    fprintf(fp,"\ntotal amount:\t\t\t\t\t\t\t\t\t%f",total);
    fprintf(fp,"\ntotal discount:\t\t\t\t\t\t\t\t\t%d",dis);
    fprintf(fp,"--------------------------------------------------------------------------------------\n");
    










     return 0;

     

}