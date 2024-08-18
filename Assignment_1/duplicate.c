#include <stdio.h>        
void main()    
{   int arr[10];
    int i;
    printf("Enter the number in array: ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
     for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    int length = sizeof(arr)/sizeof(arr[0]);         
    printf("\nDuplicate elements in given array: \n");    
    for(int i = 0; i < length; i++) {    
        for(int j = i + 1; j < length; j++) {    
            if(arr[i] == arr[j])    
                printf("%d\n", arr[j]);    
        }    
    }    
}  