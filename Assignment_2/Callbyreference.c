#include<stdio.h>
void updatearray(int arr[],int length){
    printf("\narray before update: ");
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }
    printf("\narray after update: ");
    for(int i=0;i<length;i++){
        arr[i]+=10;
        printf("%d ",arr[i]);
    }
}
void main(){
    int arr[5]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("array before function call: ");
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }
    updatearray(arr,length);
    printf("\narray after function call: ");
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);   
}
}