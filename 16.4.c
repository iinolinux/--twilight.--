#include <stdio.h>
int main(void){
    char let = 'A';
    for(int i = 0,changer = 0;i<=6;i++){
        for(int j = 0;j<i;j++){
            printf("%c",let+changer);
            changer++;
        }
        printf("\n");
    }
}