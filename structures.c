#include <stdio.h>
#include <string.h>

struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
};

int main(void){

    // s1.myLetter = 'B';
    // s1.myNum = 12345;
    // strcpy(s1.myString, "Some text");
    // Create a structure variable and assign values to it
    struct myStructure s1 = {13, 'B', "Some text"};

    // Print values
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
    printf("My string: %s", s1.myString);


    // Copy structures
    struct myStructure s2;
    s2 = s1;
    // Change s2 values
    s2.myNum = 30;
    s2.myLetter = 'C';
    strcpy(s2.myString, "Something else");

    // Print values
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
    printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);

    return 0;
}