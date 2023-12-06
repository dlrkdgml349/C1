#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char country[20];
    int population;
} City;

void clearbuffer(){
    while(getchar()!='\n');
}

void inputcities(City *city){
    printf("Name> ");
    fgets(city->name, sizeof(city->name), stdin);
    city->name[strlen(city->name)-1] = '\0';
    printf("Country> ");
    fgets(city->country, sizeof(city->country), stdin);
    city->country[strlen(city->country)-1] = '\0';
    printf("Population> ");
    scanf("%d", &city->population);
    clearbuffer();
}

int main(void){
    City cities[3];
    printf("Input three cities:\n");
    for(int i = 0; i < 3; i++){
        inputcities(&cities[i]);
    }
    printf("\nPrinting the three cities:\n");
    for(int i = 0; i < 3; i++){
        printf("%d. %s in %s with a population of %d people\n", (i+1), cities[i].name, cities[i].country, cities[i].population);
    }

}