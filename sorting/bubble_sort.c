#include<stdio.h>
int main(){
    int arr[100],swap, i,j,n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }
    printf("sorted list: ");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}