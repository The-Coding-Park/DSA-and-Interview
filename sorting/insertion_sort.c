#include<stdio.h>
int main(){
    int arr[100],i,j,swap,n,pos;
    printf("emter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n-1;i++){
        pos=i;
        for(j=i+1;j<n;j++){
            if(arr[pos]>arr[j]){
                pos=j;
            }
            if(pos!=i){
                swap=arr[i];
                arr[i]=arr[pos];
                arr[pos]=swap;

            }
        }
    }
    printf("Sorted Array:n");
    for(i = 0; i < n; i++)
    printf("%d\t", arr[i]);
    return 0;

}