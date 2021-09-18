#pragma once
#include <string.h>
#include <stdbool.h>

bool isposnum(char string[]) {
    int amountofnumbers = 0;
    char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (int i = 0; i < strlen(string); i++) {
        for (int j = 0; j < sizeof(numbers) / sizeof(numbers[0]); j++) {
            if (string[i] == numbers[j]) {
                amountofnumbers++;
                break;
            }
        }
    }
    if (amountofnumbers == strlen(string)) {
        return true;
    }
    return false;
}

bool isminusnum(char string[]) {
    int amountofnumbers = 0;
    char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (int i = 0; i < strlen(string); i++) {
        for (int j = 0; j < sizeof(numbers) / sizeof(numbers[0]); j++) {
            if (string[i] == numbers[j]) {
                amountofnumbers++;
                break;
            }
        }
    }
    if (string[0] == '-' && amountofnumbers == strlen(string) - 1) {
        return true;
    }
    return false;
}

bool isnum(char string[]) {
    if (isminusnum(string) || isposnum(string)) return true;
    return false;
}
