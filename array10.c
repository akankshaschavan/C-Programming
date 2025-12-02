#include<stdio.h>
int main(){
    int a[100],b[100],uni[100],un,intersection[100],in,i,j,k;
    int n1,n2;

    printf("enter N for 1st array:");
    scanf("%d",&n1);

    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }

    printf("enter N for 2nd array:");
    scanf("%d",&n2);

    for(i=0;i<n1;i++){
        scanf("%d",&b[i]);
    }

    for(i=0;i<n1;i++){
        for(j=i+1;j<n1;j++){
            if(a[i]==a[j]){
                for(k=j;k<n1-1;k++){
                    a[k]=a[k+1];
                    n1--;
                    j--;
                }
            }
        }
    }
    for(i=0;i<n2;i++){
        for(j=i+1;j<n2;j++){
            if(b[i]==b[j]){
                for(k=j;k<n2-1;k++){
                    b[k]=b[k+1];
                    n2--;
                    j--;
                }
            }
        }

    }
    un=0;
    for(i=0;i<n1;i++,un++){
        uni[un]=a[i];
    }

    for(i=0;i<n2;i++,un++){
        uni[un]=b[i];
    }
    in=0;
    for(i=0;i<n1;i++){
        for(j=n1;j<un;j++){
            if(uni[i]==uni[j]){
                for(k=j;k<un-1;k++)
                uni[k]=uni[k+1];

                intersection[in]=uni[i];
                in++;
                un--;
            }
        }
    }
    if(in>0){
        printf("intersection:\n");
        for(i=0;i<in;i++)
        printf("\n%d",intersection[i]);
    }
    printf("\nunion:\n");
    for(i=0;i<un;i++)
    printf("\n%d",uni[i]);

    return 0;


}