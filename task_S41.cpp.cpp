#include <iostream>
#include <clocale>
using namespace std;

double squared_sum(double a, double b) {
    double sum = a + b;
    return sum * sum;
}

int main() {
    setlocale(0, "Russian");

    cout << squared_sum(12, 6) << "\n";   // 324
    cout << squared_sum(12, -6) << "\n";  // 36

    return 0;
}

