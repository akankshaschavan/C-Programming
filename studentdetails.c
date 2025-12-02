#include<stdio.h>
int main(){
    int roll;
    char sname[50],sub1[100],sub2[100],sub3[100];
    char subject[50];
    float m1 ,m2 ,m3;
    float total ,average;
    char grade;

    FILE* fp;
    fp=fopen("studentdetails.txt","w");
    printf("enter a student details:");
    printf("Enter student roll no:");
    scanf("%d",&roll);
    printf("Enter student Name:");
    gets(sname);
    gets(sname);
    
    printf(" subject1:");
    gets(sub1);
    printf("Marks :");
    scanf("%f",&m1);
    printf("subject2:");
    gets(sub2);
    gets(sub2);
    printf("Marks:");
    scanf("%f",&m2);
    printf("subject3:");
    gets(sub3);
    gets(sub3);
    printf("Marks : ");
    scanf("%f",&m3);

    total=m1+m2+m3;
    average=total/3;

    if(average>=90)
    grade ='O';
    else if(average>=80)
    grade ='A';
    else if(average>=70)
    grade = 'B';
    else if(average>=60)
    grade ='c';
    else if(average>=50)
    grade = 'E';
    else
    grade= 'F';

    fprintf(fp," \nRoll no: %d",roll);
    fprintf(fp,"\nName: %s",sname);
     

    fprintf(fp,"\nSubject1: %s",sub1);
    fprintf(fp,"\nMarks:%.2f",m1);
    fprintf(fp,"\nSubject2: %s",sub2);
    fprintf(fp,"\nMarks:%.2f",m2);
    fprintf(fp,"\nSubject3: %s",sub3);
    fprintf(fp,"\nMarks:%.2f",m3);
    
    fprintf(fp,"\nTotal:%.2f",total);
    fprintf(fp,"\nAverage:%.2f",average);
    fprintf(fp,"\nGrade:%c",grade);

    return 0;
    
    
    


    




}