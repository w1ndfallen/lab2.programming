#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    cout << "Введіть координати першої вершини (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Введіть координати другої вершини (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Введіть координати третьої вершини (x3 y3): ";
    cin >> x3 >> y3;

    double side1 = distance(x1, y1, x2, y2);
    double side2 = distance(x2, y2, x3, y3);
    double side3 = distance(x3, y3, x1, y1);

    double perimeter = side1 + side2 + side3;

    cout << "Периметр трикутника: " << perimeter << endl;

    return 0;
}
