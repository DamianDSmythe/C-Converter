#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, lastDigit;
    
    while (binary > 0) {
        lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    
    return decimal;
}

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;
    
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int choice, num;
    
    printf("Choose an option:\n");
    printf("1. Convert binary to decimal\n");
    printf("2. Convert decimal to binary\n");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &num);
        printf("Decimal: %d\n", binaryToDecimal(num));
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        decimalToBinary(num);
    } else {
        printf("Invalid choice.\n");
    }
    
    return 0;
}
