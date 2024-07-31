#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float num1, num2;
    cout << "enter first number: ";
    cin >> num1;
    cout << "enter second number: ";
    cin >> num2;
    cout << "addition: " << num1 + num2 << endl;
    cout << "subtraction: " << num1 - num2 << endl;
    cout << "multiplication: " << num1 * num2 << endl;
    if (num2 != 0)
        cout << "division: " << num1 / num2 << endl;
    else
        cout << "cannot divide by zero." << endl;
    if (num2 != 0)
        cout << "modulo: " << fmod(num1, num2) << endl;
    else
        cout << "did not division and modulo because the 2nd number is 0" << endl;
    return 0;
}

