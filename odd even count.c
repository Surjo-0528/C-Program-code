#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversedNum = 0;

    // Ask the user for an integer input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number in a temporary variable
    originalNum = num;

    // Reverse the number mathematically
    while (num > 0) {
        remainder = num % 10;                  // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Append digit to reversed number
        num /= 10;                             // Remove the last digit
    }

    // Check if the original number and reversed number match
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}
