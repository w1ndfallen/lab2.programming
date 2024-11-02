#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;
    cout << "Введіть координати першої вершини (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Введіть координати другої вершини (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Введіть координати третьої вершини (x3 y3): ";
    cin >> x3 >> y3;

    double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double side3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    double perimeter = side1 + side2 + side3;

    cout << "Периметр трикутника: " << perimeter << endl;

    return 0;
}
