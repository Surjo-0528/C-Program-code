#include <stdio.h>

int main() {
    int r, c, pos = 0, neg = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    printf("Enter elements:\n");

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] > 0) pos++;
            else if(arr[i][j] < 0) neg++;
        }
    }

    printf("Positive: %d\nNegative: %d\n", pos, neg);
    return 0;
}
