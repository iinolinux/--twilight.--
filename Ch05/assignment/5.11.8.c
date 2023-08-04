#include <stdio.h>
int main(void){
    int in;
    int in2;

    printf("This program computes moduli.\nEnter an intefer to serve as the second operand:");
    scanf("%d",&in);
    printf("Now enter the first operand:");
    scanf("%d",&in2);
    printf("%d %% %d is %d\n",in2,in,in2 % in);
    printf("Enter next number for first operand (<=0 to quit):");
    while((scanf("%d",&in2))==1){
        if(in2<=0)
            break;
        printf("%d %% %d is %d\n",in2,in,in2 % in);
        printf("Enter next number for first operand (<=0 to quit):");
    }

    return 0;
}
