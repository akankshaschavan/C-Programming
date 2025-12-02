#include<stdio.h>
void printArray(int a[],int n){
    for(i=0;i<n;i++) {
        printf("%d",a[i]);

    }
    printf("\n");
}
float average(int a[],int n){
    int sum=0;
    for(i=0;i<n;i++){
        sum= sum+a[i];
    }
    returm (float)sum/n;
}
int findMax(int a[],int n){
    int max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int search(int a[],int key,int n){
for(i=0;i<n;i++){
    if(a[i]==key){
        return i;

    }
}
return -1;
}
int countOccurrence(int a[],int n,int key){
    int count=0;
    for(i=0;i<n;i++){
        if(a[i]==key){
            count++;
        }
    }
    return count;
}

int main(){
    int n,key,choise,a[100];
    printf("enter n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    do{
        printf("\n menu\n");
        printf("1.print array elements:\n");
        printf("2.calculate average:\n");
        printf("3.find maximum of array:\n");
        printf("4.search an alement:\n");
        printf("5.count occurance of element:\n");
        printf("6.exit");
        printf("enter your choise:");
        scanf("%d",&choise);

        switch(choise){
            case 1:printArray(a,n);
            break;

            case 2:printf("average=%.2f\n",calculateAverage=%.2f\n(a,n));
            break;

            case 3:printf("max element=%d\n",findMax(a,n));
            break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &key);
                result = searchElement(arr, n, key);
                if (result != -1)
                    printf("Element %d found at position %d\n", key, result + 1);
                else
                    printf("Element %d not found in array\n", key);
                break;

            case 5:
                printf("Enter element to count: ");
                scanf("%d", &key);
                result = countOccurrence(arr, n, key);
                printf("Element %d occurred %d time(s)\n", key, result);
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");

        
        }
        
    
    }while (choice != 6);

    return 0;
}


