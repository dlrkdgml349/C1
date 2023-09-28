#include <stdio.h>

int main(void){
    double num;
    printf("Please enter kilometers: ");
    scanf("%lf", &num);

    printf("%.1f km is equal to %.1f miles.", num, num/1.609);
}