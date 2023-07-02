#include <stdio.h>

int sum(int k);

int main(void){
    int result = sum(10);
    printf("%d", result);
    return 0;
}

// Recursion is the technique of making a function call itself.
int sum(int k){
    if (k > 0){
        return k + sum(k - 1);
    } else {
        return 0;
    }
}