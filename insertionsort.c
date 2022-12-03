#include<stdio.h>
#define max 5
int main(){
    int a[max];
    int i,j,key;
    printf("Enter the elements in the array=");
    for(i=0;i<max;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=max-1;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(i=0;i<max;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
