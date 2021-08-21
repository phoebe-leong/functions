#include <string.h>

int isnum(char string[]) {
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
        return 0;
    }
    return 1;
}
