#include <iostream>
using namespace std;

// Function to print pyramid pattern
void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int num;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> num;
    
    printPyramid(num);  // Call the function with the user input

    return 0;
}

