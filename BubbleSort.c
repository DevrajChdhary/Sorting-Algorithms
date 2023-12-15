#include<stdio.h>
#define max 5
int main(){
    int a[max];
    int i,j,temp;
    printf("Enter the elements in the array:");
    for(i=0;i<max;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<max-1;i++){
        for(j=0;j<max-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }     
        }
    }
    printf("The sorted array is=");
    for(i=0;i<max;i++){
        printf("%d",a[i]);
    }
    return 0;
}
