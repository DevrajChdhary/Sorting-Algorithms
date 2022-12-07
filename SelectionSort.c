#include<stdio.h>
#define max 10

void sort(int *a){
    int i,j;
    for(i=0;i<max-1;i++){
     int temp=i;
     for(j=i+1;j<max;j++){
         if(a[j]<a[temp]){
             temp=j;
         }
     }
     int swap=a[i];
     a[i]=a[temp];
     a[temp]=swap;
    }
}
void show(int *a){
    int i;
    printf("The sorted array is=");
    for(i=0;i<max;i++){
        printf("%d",a[i]);
    }
}
int main(){
    int i;
    int a[max];
    printf("Enter the elements in the array:");
    for(i=0;i<max;i++){
     scanf("%d",&a[i]);   
    }
    sort(a);
    show(a);
    return 0;
}
