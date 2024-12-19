#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, prime_no = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 1){
        printf("1 is neither prime or composite");
    }
    else{
    for(i=1; i<=num; i++){
        if(num%i==0){
            prime_no++;
        }
    }
    if (prime_no == 2){
        printf("%d is prime number", num);
    }
    else{
        printf("composite no");
    }
    }
   
    return 0;
}
