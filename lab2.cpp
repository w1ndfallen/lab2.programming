#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;

    cout << "Enter the coordinates of the first vertex (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinates of the second vertex (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Enter the coordinates of the third vertex (x3 y3): ";
    cin >> x3 >> y3;

    double side1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double side2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    double side3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

    double perimeter = side1 + side2 + side3;

    cout << "Perimeter of triangle: " << perimeter << endl;

    return 0;
}
