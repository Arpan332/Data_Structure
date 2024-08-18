#include<stdio.h>
void main(){
    int i=0,n=0,lar1=0,lar2=0;
    int arr[5];
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    printf("Enter the element in array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    lar1=arr[0];
    lar2=arr[1];
    if(lar1<lar2){
        int temp=lar1;
        lar1=lar2;
        lar2=temp;
    }
    for(i=2;i<n;i++){
        if(arr[i]>lar1){
            lar2=lar1;
            lar1=arr[i];
        }
        else if(arr[i]>lar2 && arr[i]!=lar1){
            lar2=arr[i];
        }
    }
    printf("First largest: %d",lar1);
    printf("Second largest: %d",lar2);
}