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


    /* printf */
    int add = 3 + 7;
    printf("%d + %d = %d\n", 3, 1, 3 + 1);

    /* scanf */
    int input;
    scanf("%d", &input);
    printf("입력 값 : %d\n", input);

    // 문자 및 문자열 활용
    char c = 'A';
    printf("%c\n ", c);

    char str[256];
    scanf("%s", str, sizeof(str));
    printf("%s\n ", str);

    return 0;
}