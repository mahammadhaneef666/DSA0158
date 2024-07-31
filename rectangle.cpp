#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {
        cout << "rectangle object created." << endl;
    }
    ~Rectangle() {
        cout << "rectangle object destroyed." << endl;
    }
    double area() {
        return length * width;
    }
};
int main() {
    double length, width;
    cout << "enter length of the rectangle: ";
    cin >> length;
    cout << "enter width of the rectangle: ";
    cin >> width;
    Rectangle rect(length, width);
    cout << "Area of the rectangle: " << rect.area() << endl;
    return 0;
}

