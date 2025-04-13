#include <iostream>
using namespace std;

double calculateArea(double radius) {
    return 3.14 * radius * radius;
}

int main() {
    // Тест: радиус 2 → площадь ≈ 12.56
    if (calculateArea(2) != 12.56) {
        cerr << "Тест провален!" << endl;
        return 1;
    }
    cout << "Тест пройден!" << endl;
    return 0;
}
