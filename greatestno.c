#include <stdio.h>
int main(){
    float number_1, number_2, number_3;
    printf("Enter the number\n");
    scanf("%f %f %f", &number_1, &number_2, &number_3);
    if (number_1>number_2 && number_1 > number_3)
    {
        printf("%f id greatest", number_1);
    }
    else if (number_2 > number_1 && number_2>number_3)
    {
        printf("%f is greatest", number_2);
    }
    else if (number_3 > number_2 && number_3 > number_1){
        printf("%f is greatest", number_3);
    }
    else{
        printf("Enter a number");
    }
    return 0;
}