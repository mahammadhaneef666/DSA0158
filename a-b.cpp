#include <iostream>
#include <string>

using namespace std;

string convertToTitle(int columnNumber) {
    string result = "";

    while (columnNumber > 0) {
        columnNumber--;

        char ch = 'A' + (columnNumber % 26);

        result = ch + result;

        columnNumber /= 26;
    }

    return result;
}

int main() {
    int columnNumber = 28;
    string columnTitle = convertToTitle(columnNumber);

    cout << "Column Title for columnNumber " << columnNumber << ": " << columnTitle << endl;
    
    
    
    
    
    1. Initialize an empty string result to store the column title.
2. While columnNumber is greater than 0:
    a. Adjust columnNumber to start from 0 by subtracting 1.
    b. Calculate the remainder by taking (columnNumber % 26).
    c. Convert the remainder to the corresponding character by adding 'A'.
    d. Prepend the character to the result.
    e. Update columnNumber to (columnNumber / 26).
3. Return the result as the Excel sheet column title.


    return 0;
}

