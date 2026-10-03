#include <iostream>
using namespace std;

int main() {

    int a = 15;
    double b = 4.5;
    float c = 2.5;
    char d = 10;

    cout << "znachenia:" << endl;
    cout << "a (int) = " << a << endl;
    cout << "b (double) = " << b << endl;
    cout << "c (float) = " << c << endl;
    cout << "d (char) = " << (int)d << endl;

    cout << "1.+:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "c + d = " << c + d << endl;
    cout << endl;

    cout << "2.-:" << endl;
    cout << "a - c = " << a - c << endl;
    cout << "b - d = " << b - d << endl;
    cout << endl;

    cout << "3.*:" << endl;
    cout << "a * c = " << a * c << endl;
    cout << "b * d = " << b * d << endl;
    cout << endl;

    cout << "4./:" << endl;
    cout << "a / c = " << a / c << endl;
    cout << "b / d = " << b / d << endl;
    cout << endl;

    return 0;
}


