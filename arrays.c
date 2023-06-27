#include <stdio.h>

int main(void){
    int myNumbers[19] = {23, 11, 23, 33, 44};
    printf("%d\n",myNumbers[1]);

    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
    int i, j;
    for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
        printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}