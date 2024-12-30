#include <stdio.h>
int main(){
    int num, factorial = 1, i;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        factorial = factorial * i;
    }
    printf("The factorial of %d is\n %d", num, factorial);
    return 0;
}