#include <stdio.h>

int main(void){

    // Creating Pointers
    int myAge = 43; // an int variable
    int* ptr = &myAge;

    printf("%d\n", myAge);  // Outputs the value of myAge (43)
    printf("%p\n", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", ptr);


    // Dereference: Output the value of myAge with the pointer (43)
    /*
    - When used in declaration (int* ptr), it creates a pointer variable.
    - When not used in declaration, it act as a dereference operator.
    */
    printf("%d\n", *ptr);

    int myNumbers[4] = {25, 50, 75, 100};

    // Get the memory address of the myNumbers array
    printf("%p\n", myNumbers);

    // Get the memory address of the first array element
    printf("%p\n", &myNumbers[0]);

    // Get the value of the second element in myNumbers
    printf("%d\n", *(myNumbers + 1));

    // Get the value of the third element in myNumbers
    *(myNumbers + 2) = 182828;
    printf("%d", *(myNumbers + 2));
}