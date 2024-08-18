#include<stdio.h>
void main(){
    int arr[10];
    int i,n;
    int sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the numbers in array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("\nSum of all elements in array is: %d",sum);
}