#include <stdio.h>
int main(){
    int num, sum = 0, i;
    printf("Enter the number: ");
    scanf("%d", &num);
   for ( i = 0; i < num; i++)
   {
        sum = sum + i;
   }
   printf("The sum from 1 to %d is %d", num, sum);
    return 0;
}