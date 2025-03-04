#include<stdio.h>
int main(){
    int num = 125, noOfDigits = 0;
    while (num!=0)
    {
        num = num/10;
        noOfDigits++;
    }
    printf("%d", noOfDigits);
    return 0;
}