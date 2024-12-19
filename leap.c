#include <stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    if (year % 4 == 0){
        if (year % 100 == 0){
        if(year%400 == 0){
            printf("The year is leap");
        }
        else{
            printf("The year is not leap");
        }
        }
        else{
            printf("The year is leap");
        }
    }
    else{
        printf("The year is not leap..");
    }
    return 0;
}

