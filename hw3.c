#include <stdio.h>
int main(void){
    int i = 0;
    int j = 0;
    for(i = 0; i < 5; i++){
        for(j = i; j < 4; j++){
            printf(" ");
        }
        for(j = 0; j < 2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}