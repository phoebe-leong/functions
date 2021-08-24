#include <stdbool.h>
#include <string.h>
#pragma once

bool isfloat(const char string[]) {
    int amountofnumbers = 0;
    int amountofedecpoints = 0;
    char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (int i = 0; i < strlen(string); i++) {
        for (int j = 0; j < sizeof(numbers) / sizeof(numbers[0]); j++) {
            if (string[i] == numbers[j]) {
                amountofnumbers++;
                break;
            } else if (string[i] == '.' && i != strlen(string) - 1) {
                amountofedecpoints++;
                break;
            }
            if (amountofnumbers == 2) {
                return false;
            }
        }
    }
    if (amountofedecpoints == 1 && amountofnumbers == strlen(string) - 1) {
        return true;
    }
    return false;
}
