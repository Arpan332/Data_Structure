#include<stdio.h>
void main(){
    int arr[10];
    int i,n,temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the number in array: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("Reverse array is: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);   
    }
}