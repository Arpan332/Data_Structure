#include<stdio.h>
void main(){
    float centigrade, fahrenheit;
    printf("Enter temparature in degree centigrade: ");
    scanf("%f", &centigrade);
    fahrenheit=((centigrade*9)/5)+32;
    printf("Given temparature in fahrenheit is: %f",fahrenheit);
}