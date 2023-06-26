#include <stdio.h>

int main(void){
    int sum = 1;
    int sum2 = 199 + sum;

    sum &= 10;
    printf("%d\n", sum);
    printf("%d\n", sum |= 10);}