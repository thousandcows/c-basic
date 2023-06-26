#include <stdio.h>

int main(void){
    int myNum = 15;
    float myFloatNum = 5.999;
    char myLetter = 'S';

    // printf(myNum); // Nothing happens
    printf("%d\n", myNum); // Print with "format specifiers"
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    return 0;
}