#include <stdio.h>
#include <ctype.h>
int main(void){
    char c;
    int trans = 0;

    while((c = getchar()) != '#'){
        if(c == '.'){
            printf("!");
            trans++;
            continue;
        }else if(c == '!'){
            printf("!!");
            trans++;
            continue;
        }
        putchar(c);

        //0O0O0O000hhh
    }
    printf("\nTrans time = %d,done.\n",trans);

    return 0;
}
