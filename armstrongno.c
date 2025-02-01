//program to check armstrong no
#include <stdio.h>
#include <math.h>
int main(){
    int input, realValue, remainder, digit = 0, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &input);
    realValue = input;//we are assigning this cause the value of input might change in opertion
    while(input!=0){
        input = input/10;//calculating no of digits
        digit++;
    }
    input = realValue;//here i am assigning this cause the value of input has change cause of above operation
    while(input!=0){
        remainder = input%10;
        sum = sum + pow(remainder, digit);//here we are raising the power and adding
        input = input/10;
    }
    if(sum == realValue){
        printf("%d is Armstrong No", realValue);
    }
    else if(sum != realValue){
        printf("%d is not a Armstrong No", realValue);
    }
    return 0;
}