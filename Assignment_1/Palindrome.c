#include<stdio.h>
#include<string.h>
void main(){
    char word[20];
    int i,length;
    int flag=0;
    printf("Enter the Word: ");
    scanf("%s", word);
    length=strlen(word);
    for(i=0;i<length/2;i++){
        if(word[i]!=word[length-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%s is palindrome");
    }
    else{
         printf("%s is not palindrome");
    }
}