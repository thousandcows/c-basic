#include <stdio.h>

int main(void){
    /* int */
    int age = 12;
    printf("%d\n", age);
    age = 13;
    printf("%d\n", age);

    /* float */

    float f = 45.23f;
    printf("%.1f\n", f);
    double d = 4.211113f;
    printf("%.1f\n", d);

    /* constant number */
    const int YEAR = 2999;
    printf("태어난 연도:%d\t", YEAR);
    return 0;
}