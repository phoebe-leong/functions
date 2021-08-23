#include <string>
#pragma once

bool isnum(std::string string) {
    int amountofnumbers = 0;
    char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (int i = 0; i < string.size(); i++) {
        for (int j = 0; j < sizeof(numbers) / sizeof(numbers[0]); j++) {
            if (string[i] == numbers[j]) {
                amountofnumbers++;
                break;
            }
        }
    }
    if (amountofnumbers == string.size()) {
        return true;
    }
    return false;
}
