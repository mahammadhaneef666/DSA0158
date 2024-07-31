#include <iostream>
using namespace std;
class Subtractor {
private:
    int value;
public:
    Subtractor() : value(0) {}
    Subtractor(int val) : value(val) {}
    Subtractor operator-(Subtractor &other) {
        Subtractor result;
        result.value = this->value - other.value;
        return result;
    }
    void display() {
        cout << "value: " << value << endl;
    }
};

int main() {
    int num1, num2;
    cout << "enter the first number: ";
    cin >> num1;
    cout << "enter the second number: ";
    cin >> num2;
    Subtractor numObject1(num1);
    Subtractor numObject2(num2);
    Subtractor result = numObject1 - numObject2;
    cout << "result of subtraction:" << endl;
    result.display();
    return 0;
}

