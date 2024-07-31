#include <iostream>
#include <cmath>

using namespace std;
double calculateSquareArea(double side) {
    return side * side;
}
double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateCircleArea(double radius) {
    return M_PI * radius * radius;
}
int main() {
    int choice;
	cout << "choose a shape to find the area:" << endl;
    cout << "1. square" << endl;
    cout << "2. rectangle" << endl;
    cout << "3. circle" << endl;
    cout << "enter your choice (1, 2, or 3): ";
    cin >> choice;
	switch (choice) {
        case 1: {
            double side;
            cout << "enter the side length of the square: ";
            cin >> side;
            double squareArea = calculateSquareArea(side);
            cout << "area of square: " << squareArea << endl;
            break;
        }
        case 2: {
            double length, width;
            cout << "enter the length of the rectangle: ";
            cin >> length;
            cout << "enter the width of the rectangle: ";
            cin >> width;
            double rectangleArea = calculateRectangleArea(length, width);
            cout << "area of rectangle: " << rectangleArea << endl;
            break;
        }
        case 3: {
            double radius;
            cout << "enter the radius of the circle: ";
            cin >> radius;
            double circleArea = calculateCircleArea(radius);
            cout << "area of circle: " << circleArea << endl;
            break;
        }
        default:
            cout << "invalid choice. please choose 1, 2, or 3." << endl;
    }

    return 0;
}
