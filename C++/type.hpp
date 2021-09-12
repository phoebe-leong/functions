#include <string>

#define TYPE_STRING 0
#define TYPE_BOOL 1
#define TYPE_INT 2
#define TYPE_FLOAT 3

int type(const std::string type) {
    int nums = 0, index = 0;

    if (type == "true" || type == "false") return TYPE_BOOL;
    for (int i = 0; i < type.size(); i++) {
        if (type[i] >= '0' && type[i] <= '9') nums++;
        else if (type[i] == '.') index = i;
    }
    if (nums == type.size()) return TYPE_INT;
    else if (nums == type.size() - 1 && type[index] == '.') return TYPE_FLOAT;

    return TYPE_STRING;
}
