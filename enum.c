#include <stdio.h>

enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};

int main(){
    enum Level myVar = MEDIUM;

    switch (myVar) {
    case 25:
        printf("Low Level");
        break;
    case 50:
        printf("Medium level");
        break;
    case 75:
        printf("High level");
        break;
    }
    return 0;
}