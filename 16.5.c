#include<stdio.h>
int main(void){
    char awa;
    printf("Type in a E :");
    scanf("%c",&awa);
    char let = awa-4;
    for(int i=1;i<=5;i++){
        for(int j=0;j<5-i;j++)
        printf(" ");
        for(int j=0;j<i;j++)
        printf("%c",let+j);
        for(int j=2;j<i+1;j++)
        printf("%c",let+i-j);
    printf("\n");   
    }
}