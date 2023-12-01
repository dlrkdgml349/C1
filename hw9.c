#include <stdio.h>
#include <string.h>

char convCase(char ch){
    const char diff = 'a' - 'A';
    return ch + diff;
}

int main(void){
    char s[100];

    printf("Input> ");
    fgets(s, sizeof(s), stdin);
    for(int i=0; i < strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = convCase(s[i]);
    }
    printf("Output> %s", s);
}