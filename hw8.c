#include <stdio.h>
#include <math.h>

double getstd(double*);

int main(void){
    double numbers[5];
    printf("Enter 5 real numbers: ");
    for(int i = 0; i < 5; i++){
        scanf("%lf", &numbers[i]);
    }
    double result = getstd(numbers);
    printf("Standard Deviation = %.3lf", result);
}

double getstd(double * n){
    double sum = 0;
    double mean = (n[0]+n[1]+n[2]+n[3]+n[4]) / 5;
    for(int i = 0; i < 5; i++){
        sum = sum + pow(*(n+i) - mean, 2);
    }
    return sqrt(sum/5);
}