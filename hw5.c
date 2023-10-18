#include <stdio.h>

void a(int n){
    if(n>1) a(n/2);
    printf("%d", n%2);
}

int main(void){
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    a(n);
}