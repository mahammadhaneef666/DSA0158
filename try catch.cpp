#include <iostream>
#include <stdexcept>

using namespace std;

void innerFunction() {
    try {
        cout << "Inside inner try block" << endl;
        throw runtime_error("Exception from innerFunction");
    }
    catch (const runtime_error& e) {
        cout << "Caught exception in inner catch block: " << e.what() << endl;
        throw; 
    }
}

void outerFunction() {
    try {
        cout << "Inside outer try block" << endl;
        innerFunction();
    }
    catch (const runtime_error& e) {
        cout << "Caught exception in outer catch block: " << e.what() << endl;
    }
}

int main() {
    try {
        cout << "Inside main try block" << endl;
        outerFunction();
    }
    catch (const exception& e) {
        cout << "Caught exception in main catch block: " << e.what() << endl;
    }

    return 0;
}

