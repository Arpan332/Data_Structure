#include<stdio.h>
void main(){
    int arr[5];
    int i;
    printf("Enter elements into the array: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements in array are: ");
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}
