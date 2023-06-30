#include <stdio.h>

void myFunctionDeclaration() { // declaration
  // the body of the function (definition)
}

// Create a function
void myFirstFunction(char name[], int age){
    printf("I just got executed!");
    printf("Hello %s. You are %d years old", name, age);
}

void iterArray(int myNumbers []);

int main(void){
    // Predifined functions
    printf("Hello world");
    myFirstFunction("Jenny", 14);
    
    int myNumbers[5] = {10, 20, 30, 40, 50};
    iterArray(myNumbers);
    return 0;
}

void iterArray(int myNumbers []){
    for (int i = 0; i < 5; i++){
        printf("%d\n", myNumbers[i]);
    }
}