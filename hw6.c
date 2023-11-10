#include <stdio.h>

int main(void){
    int num[5];

    printf("Please input five integers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("\nOdd numbers: ");
    for (int i = 0; i < 5; i++)
    {
        if(num[i]%2!=0) printf("%d ", num[i]);
    }
    printf("\nEven numbers: ");
    for (int i = 0; i < 5; i++)
    {
        if(num[i]%2==0) printf("%d ", num[i]);
    }
    
}