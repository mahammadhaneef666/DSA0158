#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "enter the size of the array: ";
    cin >> size;
    int* dynamicArray = new int[size];
    cout << "enter " << size << " elements for the array: ";
    for (int i = 0; i < size; i++) {
        cin >> dynamicArray[i];
    }
    cout << "elements of the array: ";
    for (int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;
    delete[] dynamicArray;
    return 0;
}

