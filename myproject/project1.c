#include <stdio.h>

int main(void){
    char name[256];
    printf("이름이 뭔가요? ");
    scanf("%s", name, sizeof(name));

    int age;
    printf("나이가? ");
    scanf("%d", &age);

    float weight;
    printf("무게가? ");
    scanf("%f", &weight);

    printf("\n\n--- Personal information ---\n\n\n");
    printf(" 이름 : %s\n", name);
    printf(" 나이 : %d\n", age);
    printf(" 무게 : %.2f\n", weight);


    return 0;
}
