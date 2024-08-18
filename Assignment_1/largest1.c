#include<stdio.h>
void main(){
    int i,n,lar1=0,lar2=0;
    int arr[10];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter numbers in array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    lar1=arr[0];
    lar2=arr[1];
    if(lar2>lar1){
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
    printf("\nThe largest element is: %d\n",lar1 );
    printf("The second largest element is: %d",lar2 );

}