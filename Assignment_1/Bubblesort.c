#include<stdio.h>
void printarray(int* arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}
void bubblesort(int* arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
}
void main(){
    int arr[10];
    int i,n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the numbers in array: ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("The array is berfore sort: \n");
    printarray(arr,n);
    bubblesort(arr,n);
    printf("\nSorted Array is: \n");
    printarray(arr,n);
}