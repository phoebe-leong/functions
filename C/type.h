#include <string.h>

#define TYPE_STRING 0
#define TYPE_BOOL 1
#define TYPE_INT 2
#define TYPE_FLOAT 3

int type(const char type[]) {
    int nums = 0, index = 0;

    if (strcmp(type, "true") == 0 || strcmp(type, "false") == 0) return TYPE_BOOL;
    for (int i = 0; i < strlen(type); i++) {
        if (type[i] >= '0' && type[i] <= '9') nums++;
        else if (type[i] == '.') index = i;
    }
    if (nums == strlen(type)) return TYPE_INT;
    else if (nums == strlen(type) - 1 && type[index] == '.') return TYPE_FLOAT;

    return TYPE_STRING;
}
