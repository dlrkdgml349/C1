#include <stdio.h>

void printarr(int*, int*);

int main(void){
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[6] = {7, 8, 9, 10, 11, 12};

    int *ptr1 = arr1;
    int *ptr2 = arr2;

    int temp = 0;

    printarr(arr1, arr2);

    for (int i = 0; i < 6; i++)
    {
        temp = *ptr1;
        *(ptr1++) = *ptr2;
        *(ptr2++) = temp;
    }

    printf("\nafter swap\n");
    printarr(arr1, arr2);
    
}

void printarr(int *a, int *b){
    printf("arr1: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\narr2: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
}