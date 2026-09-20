#include <stdio.h>

int main() {
    int r, c;
    printf("Rows & Cols: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    printf("Elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    printf("Even: ");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (arr[i][j] % 2 == 0) printf("%d ", arr[i][j]);

    printf("\nOdd: ");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (arr[i][j] % 2 != 0) printf("%d ", arr[i][j]);
            
    return 0;
}
