#include <string>

int convertToNumber(const std::string& columnTitle) {
    int columnNumber = 0;
    int power = 1;

    for (int i = columnTitle.length() - 1; i >= 0; i--) {
        char letter = columnTitle[i];
        int number = letter - 'A' + 1;
        columnNumber += number * power;
        power *= 26;
    }

    return columnNumber;
}
}
