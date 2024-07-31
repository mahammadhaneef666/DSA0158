#include <iostream>
using namespace std;

// Function to sort an integer array
void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to sort a double array
void sort(double arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                // Swap arr[i] and arr[j]
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to print an array
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Integer array
    int intArray[] = {5, 3, 8, 1, 2};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    cout << "Original integer array: ";
    printArray(intArray, intSize);

    sort(intArray, intSize);  // Call integer sort function

    cout << "Sorted integer array: ";
    printArray(intArray, intSize);

    // Double array
    double doubleArray[] = {5.5, 3.3, 8.8, 1.1, 2.2};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    cout << "Original double array: ";
    printArray(doubleArray, doubleSize);

    sort(doubleArray, doubleSize);  // Call double sort function

    cout << "Sorted double array: ";
    printArray(doubleArray, doubleSize);

    return 0;
}

