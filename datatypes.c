#include <stdio.h>


int main(void){
    float myFloatNum = 3.5333421234;
    printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n", myFloatNum);   // Only show 4 digits


    /* type conversion */
    // 1. Implicit
    float myFloat = 9.99;
    printf("%.2f\n", myFloat);
    
    // 2. Explicit
    float sum = (float) 5 / 2;
    printf("%.1f\n",sum);
}
