#include <stdio.h>

int main() {
    long num;
    int digit_count = 0;
    
    // Input the number
    printf("Enter a number between 10 and 9999999: ");
    scanf("%ld", &num);
    
    // Check if the number is within the valid range
    if (num < 10 || num > 9999999) {
        printf("Invalid input! Please enter a number between 10 and 9999999.\n");
        return 1;
    }

    // Count the number of digits
    long temp_num = num;
    while (temp_num != 0) {
        temp_num /= 10;
        digit_count++;
    }
    
    // Display the number of digits
    printf("The number %ld has %d digits.\n", num, digit_count);
    
    // Check if the number of digits is odd or even
    if (digit_count % 2 == 0) {
        printf("The number of digits is even.\n");
    } else {
        printf("The number of digits is odd.\n");
    }
    
    return 0;
}

