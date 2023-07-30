#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '#'
int main(void){
    char c;
    int n = 0;
    while((c = getchar()) != STOP){
        if(c == '\n'){
            n = 0;
            continue;
        }
        n++;
        printf(" %c-%4d  ",c,c);
        if(n % 8 == 0)
        printf("\n");
    }
    printf("\n");

    return 0;
}