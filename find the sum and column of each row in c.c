#include <stdio.h>

void printSums(int r, int c, int mat[r][c]) {
    int i, j, s;
    for(i = 0; i < r; i++) {
        s = 0; for(j = 0; j < c; j++) s += mat[i][j];
        printf("Row %d: %d\n", i + 1, s);
    }
    for(j = 0; j < c; j++) {
        s = 0; for(i = 0; i < r; i++) s += mat[i][j];
        printf("Col %d: %d\n", j + 1, s);
    }
}

int main() {
    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    printSums(3, 3, mat);
    return 0;
}
