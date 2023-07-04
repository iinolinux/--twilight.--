#include <stdio.h>
int main(void){
    int l,m;
    printf("Type the lowest number:");
    scanf("%d",&l);
    printf("Type the biggest number:");
    scanf("%d",&m);
    for(int i = l;i<=m;i++)
    {
        printf("%8d      %8d      %8d",i,i*i,i*i*i);
        printf("\n");
    }
}