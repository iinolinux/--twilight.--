#include <stdio.h>
int main(void){
    printf("Chuckle Lucky won 100w and saved it in bank.\n");
    int years = 0;
    for(float i = 100.00;i>0;i*=1.08)
    {
        i -= 10.0;
        years++;
    }
    printf("It costs %d years.\n",years);
}