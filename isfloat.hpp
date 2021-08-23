#include <string>
#pragma once

bool isfloat(std::string string) {
    int amountofnumbers = 0;
    int amountofdecpoints = 0;
    char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (int i = 0; i < string.size(); i++) {
        for (int j = 0; j < sizeof(numbers) / sizeof(numbers[0]); j++) {
            if (string[i] == numbers[j]) {
                amountofnumbers++;
                break;
            } else if (string[i] == '.' && i != string.size() - 1) {
                amountofdecpoints++;
                break;
            }
        }
    }
    if (amountofdecpoints == 1 && amountofnumbers == string.size() - 1) {
        return true;
    }
    return false;
}
