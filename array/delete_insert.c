#include<stdio.h>
int main(){
    int n,pos;
    printf("enter nuber of elements: ");
    scanf("%d",&n);
    int arr[n];
    if(n%2==0){pos=0;}
    else
    {
        pos=n/2+1;
    }
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("deleting middle element of the list: ");
    for(int j=pos-1;j<n-1;j++){
        arr[j]=arr[j+1];
    }
    printf("after deleting middle element: ");
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    int data;
    scanf("%d",&data);
    for(int j=n-1;j>=pos-1;j--)
    arr[j+1]=arr[j];
    arr[pos-1]=data;
    printf("after adding middle element: ");
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);

        
}
}