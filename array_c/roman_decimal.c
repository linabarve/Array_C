#include <stdio.h>

void decimal_to_roman(int decimal) {
    if (decimal <= 0 || decimal >= 4000) {
        printf("Invalid input\n");
        return;
    }

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    printf("Roman numeral equivalent: ");
    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++) {
        while (decimal >= values[i]) {
            printf("%s", symbols[i]);
            decimal -= values[i];
        }
    }
    printf("\n");
}

int main() {
    int decimal_number;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_number);

    decimal_to_roman(decimal_number);

    return 0;
}


