#include <stdio.h>
#include <math.h>
int main(){
    int num, squareRoot, isPerfectSquare;
    printf("Enter the number\n");
    scanf("%d", &num);
    if (num>0){
        squareRoot = sqrt(num);
        if (squareRoot * squareRoot == num)
        {
            printf("%d is perfect square", num);
        }
        
    }
    else{
        printf("Enter positive integer");
    }
    return 0;
}