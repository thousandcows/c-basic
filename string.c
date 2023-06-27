#include <stdio.h>
#include <string.h>

int main(void){
    char greetings [100] = "Hello World!";
    printf("%s\n", greetings);

    char greetingsTwo[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greetingsTwo);

    // sizeof will always return the memory size (in bytes), and not the actual string length:
    printf("%lu\n", sizeof(greetings));
    printf("%lu\n", sizeof(greetingsTwo));

    char txt[] = "We are the so-called \"Vikings\" from the north.\\n\\t\\0";
    printf("%s\n", txt);
    printf("The length of the string is : %d", strlen(txt));

    // The size of the greetings should be large enough to store the result
    printf("%s\n", strcat(greetings, txt));

    // Copy Strings
    char str3[100];
    printf("%s\n", strcpy(str3, greetings));

    char str4[] = "Hello";
    char str5[] = "Hello";
    char str6[] = "Hi";

    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str4, str5));  // Returns 0 (the strings are equal)

    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str4, str6));  // Returns -4 (the strings are not equal)

    
}