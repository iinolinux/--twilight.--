#include <stdio.h>
#include <string.h>
int main(void){
    char words[21];
    printf("Type words(20 words are max):");
    scanf("%s",words);
    int letters = strlen(words);
    for(int i = letters;i>=0;i--){
        printf("%c",words[i]);
    }
    printf("\n");
}