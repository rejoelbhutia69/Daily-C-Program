#include <stdio.h>
int main(){
    int a = 103, remainder, reverse = 0;
    while (a != 0)
    {
         remainder = a % 10;
         reverse = reverse * 10 + remainder;
         a = a/10;
    }
    printf("%d", reverse);
    return 0;
}