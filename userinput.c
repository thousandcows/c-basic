#include <stdio.h>

int main(void){

    // Multiple Inputs
    // int myNum;
    // char myChar;

    // scanf("%d %c", &myNum, &myChar);

    // printf("%d %c", myNum, myChar);

    // Take String Input
    char fullname[30];
    printf("Type your full name\n");
    
    fgets(fullname, sizeof(fullname), stdin);

    printf("Hello %s", fullname);
}