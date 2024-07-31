#include <iostream>

using namespace std;

// Function to print an integer array
void printArray(const int arr[], int size) {
    cout << "Integer array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to print a double array
void printArray(const double arr[], int size) {
    cout << "Double array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to print a character array
void printArray(const char arr[], int size) {
    cout << "Character array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    // Printing integer array
    printArray(intArray, sizeof(intArray) / sizeof(intArray[0]));

    // Printing double array
    printArray(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]));

    // Printing character array
    printArray(charArray, sizeof(charArray) / sizeof(charArray[0]));

    return 0;
}

